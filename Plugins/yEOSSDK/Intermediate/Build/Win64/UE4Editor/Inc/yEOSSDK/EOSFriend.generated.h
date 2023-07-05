// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSFriendUser;
class UEOSPresenceBase;
 class UEOSFriendUser;
struct FEOSFriendAPIVersionSettings;
#ifdef YEOSSDK_EOSFriend_generated_h
#error "EOSFriend.generated.h already included, missing '#pragma once' in EOSFriend.h"
#endif
#define YEOSSDK_EOSFriend_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindFriend); \
	DECLARE_FUNCTION(execFindFriendByEpicID); \
	DECLARE_FUNCTION(execFindFriendPresence); \
	DECLARE_FUNCTION(execFindFriendPresenceByEpicID); \
	DECLARE_FUNCTION(execGetProductUserIds); \
	DECLARE_FUNCTION(execGetUsers); \
	DECLARE_FUNCTION(execRequestGetFriends); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetEnableForAutomaticGetInformationBits); \
	DECLARE_FUNCTION(execSetupInternalCallback);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindFriend); \
	DECLARE_FUNCTION(execFindFriendByEpicID); \
	DECLARE_FUNCTION(execFindFriendPresence); \
	DECLARE_FUNCTION(execFindFriendPresenceByEpicID); \
	DECLARE_FUNCTION(execGetProductUserIds); \
	DECLARE_FUNCTION(execGetUsers); \
	DECLARE_FUNCTION(execRequestGetFriends); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetEnableForAutomaticGetInformationBits); \
	DECLARE_FUNCTION(execSetupInternalCallback);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSFriend(); \
	friend struct Z_Construct_UClass_UEOSFriend_Statics; \
public: \
	DECLARE_CLASS(UEOSFriend, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSFriend)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEOSFriend(); \
	friend struct Z_Construct_UClass_UEOSFriend_Statics; \
public: \
	DECLARE_CLASS(UEOSFriend, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSFriend)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSFriend(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSFriend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSFriend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSFriend); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSFriend(UEOSFriend&&); \
	NO_API UEOSFriend(const UEOSFriend&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSFriend(UEOSFriend&&); \
	NO_API UEOSFriend(const UEOSFriend&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSFriend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSFriend); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSFriend)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cUsers() { return STRUCT_OFFSET(UEOSFriend, m_cUsers); } \
	FORCEINLINE static uint32 __PPO__m_cOwnRequests() { return STRUCT_OFFSET(UEOSFriend, m_cOwnRequests); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_13_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSFriend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriend_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
