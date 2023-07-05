// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSAttribute;
class UEOSCommunityUserBase;
 class UEOSAttribute;
enum class EEOSCommunityInfoType : uint8;
enum class EEOSCommunityJoinType : uint8;
enum class EEOSCommunityPermission : uint8;
 class UEOSCommunityUserBase;
class UEOSUserBase;
#ifdef YEOSSDK_EOSCommunityInfoBase_generated_h
#error "EOSCommunityInfoBase.generated.h already included, missing '#pragma once' in EOSCommunityInfoBase.h"
#endif
#define YEOSSDK_EOSCommunityInfoBase_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindAttribute); \
	DECLARE_FUNCTION(execFindPlayer); \
	DECLARE_FUNCTION(execGetAccountDisplayNameForOwnerUser); \
	DECLARE_FUNCTION(execGetAttributes); \
	DECLARE_FUNCTION(execGetAvailableSlots); \
	DECLARE_FUNCTION(execGetInfoType); \
	DECLARE_FUNCTION(execGetInviteUser); \
	DECLARE_FUNCTION(execGetJoinType); \
	DECLARE_FUNCTION(execGetMaxMember); \
	DECLARE_FUNCTION(execGetOwnerUser); \
	DECLARE_FUNCTION(execGetPermission); \
	DECLARE_FUNCTION(execGetPlayerNum); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execGetPlayersSortedByDisplayName); \
	DECLARE_FUNCTION(execGetRegistKey); \
	DECLARE_FUNCTION(execGetSortedPlayers); \
	DECLARE_FUNCTION(execGetStringOfCommunityID); \
	DECLARE_FUNCTION(execGetStringOfInviteProductUserID); \
	DECLARE_FUNCTION(execGetStringOfProductUserIDForOwnerUser); \
	DECLARE_FUNCTION(execHasPlayer); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsInvitesAllowed); \
	DECLARE_FUNCTION(execIsJoinedIn); \
	DECLARE_FUNCTION(execIsOwner); \
	DECLARE_FUNCTION(execIsOwnerUser);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindAttribute); \
	DECLARE_FUNCTION(execFindPlayer); \
	DECLARE_FUNCTION(execGetAccountDisplayNameForOwnerUser); \
	DECLARE_FUNCTION(execGetAttributes); \
	DECLARE_FUNCTION(execGetAvailableSlots); \
	DECLARE_FUNCTION(execGetInfoType); \
	DECLARE_FUNCTION(execGetInviteUser); \
	DECLARE_FUNCTION(execGetJoinType); \
	DECLARE_FUNCTION(execGetMaxMember); \
	DECLARE_FUNCTION(execGetOwnerUser); \
	DECLARE_FUNCTION(execGetPermission); \
	DECLARE_FUNCTION(execGetPlayerNum); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execGetPlayersSortedByDisplayName); \
	DECLARE_FUNCTION(execGetRegistKey); \
	DECLARE_FUNCTION(execGetSortedPlayers); \
	DECLARE_FUNCTION(execGetStringOfCommunityID); \
	DECLARE_FUNCTION(execGetStringOfInviteProductUserID); \
	DECLARE_FUNCTION(execGetStringOfProductUserIDForOwnerUser); \
	DECLARE_FUNCTION(execHasPlayer); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsInvitesAllowed); \
	DECLARE_FUNCTION(execIsJoinedIn); \
	DECLARE_FUNCTION(execIsOwner); \
	DECLARE_FUNCTION(execIsOwnerUser);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSCommunityInfoBase(); \
	friend struct Z_Construct_UClass_UEOSCommunityInfoBase_Statics; \
public: \
	DECLARE_CLASS(UEOSCommunityInfoBase, UEOSLockebleCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSCommunityInfoBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUEOSCommunityInfoBase(); \
	friend struct Z_Construct_UClass_UEOSCommunityInfoBase_Statics; \
public: \
	DECLARE_CLASS(UEOSCommunityInfoBase, UEOSLockebleCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSCommunityInfoBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSCommunityInfoBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSCommunityInfoBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSCommunityInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSCommunityInfoBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSCommunityInfoBase(UEOSCommunityInfoBase&&); \
	NO_API UEOSCommunityInfoBase(const UEOSCommunityInfoBase&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSCommunityInfoBase(UEOSCommunityInfoBase&&); \
	NO_API UEOSCommunityInfoBase(const UEOSCommunityInfoBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSCommunityInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSCommunityInfoBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSCommunityInfoBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cAttributes() { return STRUCT_OFFSET(UEOSCommunityInfoBase, m_cAttributes); } \
	FORCEINLINE static uint32 __PPO__m_cPlayers() { return STRUCT_OFFSET(UEOSCommunityInfoBase, m_cPlayers); } \
	FORCEINLINE static uint32 __PPO__m_pcOwnerUser() { return STRUCT_OFFSET(UEOSCommunityInfoBase, m_pcOwnerUser); } \
	FORCEINLINE static uint32 __PPO__m_pcInviteUser() { return STRUCT_OFFSET(UEOSCommunityInfoBase, m_pcInviteUser); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_16_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSCommunityInfoBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityInfoBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
