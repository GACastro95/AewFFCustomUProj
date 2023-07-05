// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSPresenceBase;
enum class EEOSQueryStatus : uint8;
enum class EEOSFriendStatus : uint8;
#ifdef YEOSSDK_EOSFriendUser_generated_h
#error "EOSFriendUser.generated.h already included, missing '#pragma once' in EOSFriendUser.h"
#endif
#define YEOSSDK_EOSFriendUser_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEOSPresence); \
	DECLARE_FUNCTION(execGetExternalAccountIdQueryStatus); \
	DECLARE_FUNCTION(execGetFriendStatus); \
	DECLARE_FUNCTION(execGetStringOfFriendProductUserID); \
	DECLARE_FUNCTION(execRequestGetPresence);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEOSPresence); \
	DECLARE_FUNCTION(execGetExternalAccountIdQueryStatus); \
	DECLARE_FUNCTION(execGetFriendStatus); \
	DECLARE_FUNCTION(execGetStringOfFriendProductUserID); \
	DECLARE_FUNCTION(execRequestGetPresence);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSFriendUser(); \
	friend struct Z_Construct_UClass_UEOSFriendUser_Statics; \
public: \
	DECLARE_CLASS(UEOSFriendUser, UEOSUserBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSFriendUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSFriendUser(); \
	friend struct Z_Construct_UClass_UEOSFriendUser_Statics; \
public: \
	DECLARE_CLASS(UEOSFriendUser, UEOSUserBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSFriendUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSFriendUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSFriendUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSFriendUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSFriendUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSFriendUser(UEOSFriendUser&&); \
	NO_API UEOSFriendUser(const UEOSFriendUser&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSFriendUser(UEOSFriendUser&&); \
	NO_API UEOSFriendUser(const UEOSFriendUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSFriendUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSFriendUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSFriendUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_strFriendProductUserID() { return STRUCT_OFFSET(UEOSFriendUser, m_strFriendProductUserID); } \
	FORCEINLINE static uint32 __PPO__m_pcPresence() { return STRUCT_OFFSET(UEOSFriendUser, m_pcPresence); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSFriendUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
