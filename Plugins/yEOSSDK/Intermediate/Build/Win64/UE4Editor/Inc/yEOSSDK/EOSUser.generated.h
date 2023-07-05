// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSFriend;
class UEOSPresenceBase;
 
enum class EEOSAuthEvent : uint8;
class UEOSAuth;
enum class EEOSPresenceStatus : uint8;
#ifdef YEOSSDK_EOSUser_generated_h
#error "EOSUser.generated.h already included, missing '#pragma once' in EOSUser.h"
#endif
#define YEOSSDK_EOSUser_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEOSFriend); \
	DECLARE_FUNCTION(execGetEOSPresence); \
	DECLARE_FUNCTION(execGetPresenceCache); \
	DECLARE_FUNCTION(execOnEOSAuthEvent); \
	DECLARE_FUNCTION(execRequestContentsList); \
	DECLARE_FUNCTION(execRequestDeletePresenceData); \
	DECLARE_FUNCTION(execRequestGetFriends); \
	DECLARE_FUNCTION(execRequestGetPresence); \
	DECLARE_FUNCTION(execRequestSetPresence); \
	DECLARE_FUNCTION(execRequestSetPresenceData); \
	DECLARE_FUNCTION(execRequestSetPresenceStatus);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEOSFriend); \
	DECLARE_FUNCTION(execGetEOSPresence); \
	DECLARE_FUNCTION(execGetPresenceCache); \
	DECLARE_FUNCTION(execOnEOSAuthEvent); \
	DECLARE_FUNCTION(execRequestContentsList); \
	DECLARE_FUNCTION(execRequestDeletePresenceData); \
	DECLARE_FUNCTION(execRequestGetFriends); \
	DECLARE_FUNCTION(execRequestGetPresence); \
	DECLARE_FUNCTION(execRequestSetPresence); \
	DECLARE_FUNCTION(execRequestSetPresenceData); \
	DECLARE_FUNCTION(execRequestSetPresenceStatus);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSUser(); \
	friend struct Z_Construct_UClass_UEOSUser_Statics; \
public: \
	DECLARE_CLASS(UEOSUser, UEOSUserBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEOSUser(); \
	friend struct Z_Construct_UClass_UEOSUser_Statics; \
public: \
	DECLARE_CLASS(UEOSUser, UEOSUserBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSUser(UEOSUser&&); \
	NO_API UEOSUser(const UEOSUser&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSUser(UEOSUser&&); \
	NO_API UEOSUser(const UEOSUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcFriends() { return STRUCT_OFFSET(UEOSUser, m_pcFriends); } \
	FORCEINLINE static uint32 __PPO__m_pcPresence() { return STRUCT_OFFSET(UEOSUser, m_pcPresence); } \
	FORCEINLINE static uint32 __PPO__m_cPresenceDataCache() { return STRUCT_OFFSET(UEOSUser, m_cPresenceDataCache); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_12_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
