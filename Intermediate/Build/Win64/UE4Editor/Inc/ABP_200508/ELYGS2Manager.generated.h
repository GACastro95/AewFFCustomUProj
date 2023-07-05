// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELApplicationStatus : uint8;
struct FYGS2ClientCacheParam;
struct FSSModeServerParam;
struct FSSServerEndpoint;
enum class EELNetworkStatus : uint8;
enum class EELNetworkType : uint8;
enum class EYGS2ErrorType : uint8;
class UYGS2RequestBase;
class UELNetworkObserverBase;
#ifdef ABP_200508_ELYGS2Manager_generated_h
#error "ELYGS2Manager.generated.h already included, missing '#pragma once' in ELYGS2Manager.h"
#endif
#define ABP_200508_ELYGS2Manager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplicationStatusChanged); \
	DECLARE_FUNCTION(execFindNearestServerPing); \
	DECLARE_FUNCTION(execGetBaseURLByArea); \
	DECLARE_FUNCTION(execGetClientCacheParam); \
	DECLARE_FUNCTION(execGetPingMs); \
	DECLARE_FUNCTION(execGetSSModeServerEnvData); \
	DECLARE_FUNCTION(execGetSSServerEndpointListData); \
	DECLARE_FUNCTION(execGetYGS2EnvName); \
	DECLARE_FUNCTION(execGetYGS2Permission); \
	DECLARE_FUNCTION(execGetYGS2ServerID); \
	DECLARE_FUNCTION(execGetYGS2ServerName); \
	DECLARE_FUNCTION(execGetYGS2ServerVersion); \
	DECLARE_FUNCTION(execHasConnectableServerParam); \
	DECLARE_FUNCTION(execIsAuthFailed); \
	DECLARE_FUNCTION(execIsBanned); \
	DECLARE_FUNCTION(execIsEndAuth); \
	DECLARE_FUNCTION(execIsMaintenance); \
	DECLARE_FUNCTION(execIsNetworkError); \
	DECLARE_FUNCTION(execNetworkStatusChanged); \
	DECLARE_FUNCTION(execNetworkTypeChanged); \
	DECLARE_FUNCTION(execOnYGS2Response); \
	DECLARE_FUNCTION(execRequestAuth); \
	DECLARE_FUNCTION(execRequestCancelForDebug); \
	DECLARE_FUNCTION(execRequestGetInfo); \
	DECLARE_FUNCTION(execRequestPingToAllServers); \
	DECLARE_FUNCTION(execRequestSetDisplayNameForDebug); \
	DECLARE_FUNCTION(execSetDisplayNameForDebug); \
	DECLARE_FUNCTION(execSetNetworkObserver); \
	DECLARE_FUNCTION(execSetServerListData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplicationStatusChanged); \
	DECLARE_FUNCTION(execFindNearestServerPing); \
	DECLARE_FUNCTION(execGetBaseURLByArea); \
	DECLARE_FUNCTION(execGetClientCacheParam); \
	DECLARE_FUNCTION(execGetPingMs); \
	DECLARE_FUNCTION(execGetSSModeServerEnvData); \
	DECLARE_FUNCTION(execGetSSServerEndpointListData); \
	DECLARE_FUNCTION(execGetYGS2EnvName); \
	DECLARE_FUNCTION(execGetYGS2Permission); \
	DECLARE_FUNCTION(execGetYGS2ServerID); \
	DECLARE_FUNCTION(execGetYGS2ServerName); \
	DECLARE_FUNCTION(execGetYGS2ServerVersion); \
	DECLARE_FUNCTION(execHasConnectableServerParam); \
	DECLARE_FUNCTION(execIsAuthFailed); \
	DECLARE_FUNCTION(execIsBanned); \
	DECLARE_FUNCTION(execIsEndAuth); \
	DECLARE_FUNCTION(execIsMaintenance); \
	DECLARE_FUNCTION(execIsNetworkError); \
	DECLARE_FUNCTION(execNetworkStatusChanged); \
	DECLARE_FUNCTION(execNetworkTypeChanged); \
	DECLARE_FUNCTION(execOnYGS2Response); \
	DECLARE_FUNCTION(execRequestAuth); \
	DECLARE_FUNCTION(execRequestCancelForDebug); \
	DECLARE_FUNCTION(execRequestGetInfo); \
	DECLARE_FUNCTION(execRequestPingToAllServers); \
	DECLARE_FUNCTION(execRequestSetDisplayNameForDebug); \
	DECLARE_FUNCTION(execSetDisplayNameForDebug); \
	DECLARE_FUNCTION(execSetNetworkObserver); \
	DECLARE_FUNCTION(execSetServerListData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELYGS2Manager(); \
	friend struct Z_Construct_UClass_UELYGS2Manager_Statics; \
public: \
	DECLARE_CLASS(UELYGS2Manager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELYGS2Manager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUELYGS2Manager(); \
	friend struct Z_Construct_UClass_UELYGS2Manager_Statics; \
public: \
	DECLARE_CLASS(UELYGS2Manager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELYGS2Manager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELYGS2Manager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELYGS2Manager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELYGS2Manager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELYGS2Manager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELYGS2Manager(UELYGS2Manager&&); \
	NO_API UELYGS2Manager(const UELYGS2Manager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELYGS2Manager(UELYGS2Manager&&); \
	NO_API UELYGS2Manager(const UELYGS2Manager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELYGS2Manager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELYGS2Manager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELYGS2Manager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__YGS2Requests() { return STRUCT_OFFSET(UELYGS2Manager, YGS2Requests); } \
	FORCEINLINE static uint32 __PPO__pServerParam() { return STRUCT_OFFSET(UELYGS2Manager, pServerParam); } \
	FORCEINLINE static uint32 __PPO__pServerSelector() { return STRUCT_OFFSET(UELYGS2Manager, pServerSelector); } \
	FORCEINLINE static uint32 __PPO__ClientSetupParams() { return STRUCT_OFFSET(UELYGS2Manager, ClientSetupParams); } \
	FORCEINLINE static uint32 __PPO__CurrentTargetRegionWithPing() { return STRUCT_OFFSET(UELYGS2Manager, CurrentTargetRegionWithPing); } \
	FORCEINLINE static uint32 __PPO__PingCaches() { return STRUCT_OFFSET(UELYGS2Manager, PingCaches); } \
	FORCEINLINE static uint32 __PPO__m_pNetworkObserver() { return STRUCT_OFFSET(UELYGS2Manager, m_pNetworkObserver); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_21_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELYGS2Manager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELYGS2Manager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
