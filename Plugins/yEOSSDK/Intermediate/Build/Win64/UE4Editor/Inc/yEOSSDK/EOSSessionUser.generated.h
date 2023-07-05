// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionP2PAFGameFlowData;
#ifdef YEOSSDK_EOSSessionUser_generated_h
#error "EOSSessionUser.generated.h already included, missing '#pragma once' in EOSSessionUser.h"
#endif
#define YEOSSDK_EOSSessionUser_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameFlow); \
	DECLARE_FUNCTION(execIsRegisted); \
	DECLARE_FUNCTION(execResetGameFlow); \
	DECLARE_FUNCTION(execSetupGameFlow);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameFlow); \
	DECLARE_FUNCTION(execIsRegisted); \
	DECLARE_FUNCTION(execResetGameFlow); \
	DECLARE_FUNCTION(execSetupGameFlow);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSessionUser(); \
	friend struct Z_Construct_UClass_UEOSSessionUser_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionUser, UEOSCommunityUserBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSessionUser(); \
	friend struct Z_Construct_UClass_UEOSSessionUser_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionUser, UEOSCommunityUserBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionUser(UEOSSessionUser&&); \
	NO_API UEOSSessionUser(const UEOSSessionUser&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionUser(UEOSSessionUser&&); \
	NO_API UEOSSessionUser(const UEOSSessionUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSessionUser)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcGameFlowData() { return STRUCT_OFFSET(UEOSSessionUser, m_pcGameFlowData); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_8_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
