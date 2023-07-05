// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
class UEOSAuth;
enum class EEOSUserType : uint8;
enum class EExternalAccountType : uint8;
 class UEOSUserBase;
 class UEOSUserTypeToUserBaseMap;
enum class EEOSFriendEvent : uint8;
class UEOSFriend;
enum class EEOSPresenceEvent : uint8;
class UEOSPresenceBase;
enum class EEOSUserContentsEvent : uint8;
class UEOSUserContentsBase;
struct FEOSUserContentProgress;
enum class EEOSUserEvent : uint8;
#ifdef YEOSSDK_EOSUserManager_generated_h
#error "EOSUserManager.generated.h already included, missing '#pragma once' in EOSUserManager.h"
#endif
#define YEOSSDK_EOSUserManager_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddEpicAccountUser); \
	DECLARE_FUNCTION(execAddLocalUser); \
	DECLARE_FUNCTION(execAddProductUser); \
	DECLARE_FUNCTION(execCreateUser); \
	DECLARE_FUNCTION(execFindEpicAccountUser); \
	DECLARE_FUNCTION(execFindProductUserID); \
	DECLARE_FUNCTION(execGetCurrentPlatformAccountType); \
	DECLARE_FUNCTION(execGetEpicAccountUsers); \
	DECLARE_FUNCTION(execGetProductUsers); \
	DECLARE_FUNCTION(execIsAddedEpicAccountUser); \
	DECLARE_FUNCTION(execIsAddedProductUserID); \
	DECLARE_FUNCTION(execOnFriendEvent); \
	DECLARE_FUNCTION(execOnFriendUpdatePUIDEvent); \
	DECLARE_FUNCTION(execOnPresenceEvent); \
	DECLARE_FUNCTION(execOnUserContentsEvent); \
	DECLARE_FUNCTION(execOnUserEvent); \
	DECLARE_FUNCTION(execRemoveUser);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddEpicAccountUser); \
	DECLARE_FUNCTION(execAddLocalUser); \
	DECLARE_FUNCTION(execAddProductUser); \
	DECLARE_FUNCTION(execCreateUser); \
	DECLARE_FUNCTION(execFindEpicAccountUser); \
	DECLARE_FUNCTION(execFindProductUserID); \
	DECLARE_FUNCTION(execGetCurrentPlatformAccountType); \
	DECLARE_FUNCTION(execGetEpicAccountUsers); \
	DECLARE_FUNCTION(execGetProductUsers); \
	DECLARE_FUNCTION(execIsAddedEpicAccountUser); \
	DECLARE_FUNCTION(execIsAddedProductUserID); \
	DECLARE_FUNCTION(execOnFriendEvent); \
	DECLARE_FUNCTION(execOnFriendUpdatePUIDEvent); \
	DECLARE_FUNCTION(execOnPresenceEvent); \
	DECLARE_FUNCTION(execOnUserContentsEvent); \
	DECLARE_FUNCTION(execOnUserEvent); \
	DECLARE_FUNCTION(execRemoveUser);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSUserManager(); \
	friend struct Z_Construct_UClass_UEOSUserManager_Statics; \
public: \
	DECLARE_CLASS(UEOSUserManager, UEOSLockebleCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSUserManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUEOSUserManager(); \
	friend struct Z_Construct_UClass_UEOSUserManager_Statics; \
public: \
	DECLARE_CLASS(UEOSUserManager, UEOSLockebleCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSUserManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSUserManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSUserManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSUserManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSUserManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSUserManager(UEOSUserManager&&); \
	NO_API UEOSUserManager(const UEOSUserManager&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSUserManager(UEOSUserManager&&); \
	NO_API UEOSUserManager(const UEOSUserManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSUserManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSUserManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSUserManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cEpicAccountUsers() { return STRUCT_OFFSET(UEOSUserManager, m_cEpicAccountUsers); } \
	FORCEINLINE static uint32 __PPO__m_cProductUsers() { return STRUCT_OFFSET(UEOSUserManager, m_cProductUsers); } \
	FORCEINLINE static uint32 __PPO__m_pcRefAPIRequestManager() { return STRUCT_OFFSET(UEOSUserManager, m_pcRefAPIRequestManager); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_27_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSUserManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
