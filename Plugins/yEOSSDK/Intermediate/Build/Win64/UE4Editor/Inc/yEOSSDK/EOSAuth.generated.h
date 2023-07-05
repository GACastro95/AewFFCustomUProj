// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSLoginStatus : uint8;
enum class EEOSExternalCredentialType : uint8;
enum class EEOSLoginType : uint8;
struct FEOSAuthPinGrantInfo;
struct FEOSAuthAPIVersionSettings;
#ifdef YEOSSDK_EOSAuth_generated_h
#error "EOSAuth.generated.h already included, missing '#pragma once' in EOSAuth.h"
#endif
#define YEOSSDK_EOSAuth_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAuthLoginStatus); \
	DECLARE_FUNCTION(execGetConnectLoginStatus); \
	DECLARE_FUNCTION(execGetLastCredentialType); \
	DECLARE_FUNCTION(execGetLastLoginType); \
	DECLARE_FUNCTION(execGetLoginExternalAccountId); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetLoginUserDisplayName); \
	DECLARE_FUNCTION(execGetPinGrantInfo); \
	DECLARE_FUNCTION(execGetRefreshToken); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execRequestAccountPortalLogin); \
	DECLARE_FUNCTION(execRequestConnectLinkAccount); \
	DECLARE_FUNCTION(execRequestConnectLogin); \
	DECLARE_FUNCTION(execRequestConnectUnlinkAccount); \
	DECLARE_FUNCTION(execRequestCreateUser); \
	DECLARE_FUNCTION(execRequestDevAuthLogin); \
	DECLARE_FUNCTION(execRequestDeviceCodeLogin); \
	DECLARE_FUNCTION(execRequestExchangeCodeLogin); \
	DECLARE_FUNCTION(execRequestExternalAuthLogin); \
	DECLARE_FUNCTION(execRequestExternalAuthLoginWithBinaryToken); \
	DECLARE_FUNCTION(execRequestExternalConnectLogin); \
	DECLARE_FUNCTION(execRequestExternalConnectLoginWithBinaryToken); \
	DECLARE_FUNCTION(execRequestLinkEpicAccount); \
	DECLARE_FUNCTION(execRequestLogin); \
	DECLARE_FUNCTION(execRequestLogout); \
	DECLARE_FUNCTION(execRequestPersistentAuthLogin); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetLoginExternalAccountId); \
	DECLARE_FUNCTION(execSetLoginUserDisplayName);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAuthLoginStatus); \
	DECLARE_FUNCTION(execGetConnectLoginStatus); \
	DECLARE_FUNCTION(execGetLastCredentialType); \
	DECLARE_FUNCTION(execGetLastLoginType); \
	DECLARE_FUNCTION(execGetLoginExternalAccountId); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetLoginUserDisplayName); \
	DECLARE_FUNCTION(execGetPinGrantInfo); \
	DECLARE_FUNCTION(execGetRefreshToken); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execRequestAccountPortalLogin); \
	DECLARE_FUNCTION(execRequestConnectLinkAccount); \
	DECLARE_FUNCTION(execRequestConnectLogin); \
	DECLARE_FUNCTION(execRequestConnectUnlinkAccount); \
	DECLARE_FUNCTION(execRequestCreateUser); \
	DECLARE_FUNCTION(execRequestDevAuthLogin); \
	DECLARE_FUNCTION(execRequestDeviceCodeLogin); \
	DECLARE_FUNCTION(execRequestExchangeCodeLogin); \
	DECLARE_FUNCTION(execRequestExternalAuthLogin); \
	DECLARE_FUNCTION(execRequestExternalAuthLoginWithBinaryToken); \
	DECLARE_FUNCTION(execRequestExternalConnectLogin); \
	DECLARE_FUNCTION(execRequestExternalConnectLoginWithBinaryToken); \
	DECLARE_FUNCTION(execRequestLinkEpicAccount); \
	DECLARE_FUNCTION(execRequestLogin); \
	DECLARE_FUNCTION(execRequestLogout); \
	DECLARE_FUNCTION(execRequestPersistentAuthLogin); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetLoginExternalAccountId); \
	DECLARE_FUNCTION(execSetLoginUserDisplayName);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSAuth(); \
	friend struct Z_Construct_UClass_UEOSAuth_Statics; \
public: \
	DECLARE_CLASS(UEOSAuth, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSAuth)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEOSAuth(); \
	friend struct Z_Construct_UClass_UEOSAuth_Statics; \
public: \
	DECLARE_CLASS(UEOSAuth, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSAuth)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSAuth(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSAuth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSAuth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSAuth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSAuth(UEOSAuth&&); \
	NO_API UEOSAuth(const UEOSAuth&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSAuth(UEOSAuth&&); \
	NO_API UEOSAuth(const UEOSAuth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSAuth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSAuth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSAuth)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_strUserDisplayName() { return STRUCT_OFFSET(UEOSAuth, m_strUserDisplayName); } \
	FORCEINLINE static uint32 __PPO__m_strExternalAccountId() { return STRUCT_OFFSET(UEOSAuth, m_strExternalAccountId); } \
	FORCEINLINE static uint32 __PPO__m_sConnectLoggingCount() { return STRUCT_OFFSET(UEOSAuth, m_sConnectLoggingCount); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_12_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSAuth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuth_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
