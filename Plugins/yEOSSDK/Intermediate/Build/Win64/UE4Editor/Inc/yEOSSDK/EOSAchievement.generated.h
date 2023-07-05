// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSAchievementInfo;
struct FEOSPlayerAchievementInfo;
struct FEOSUnlockAchievementInfo;
struct FEOSAchievementAPIVersionSettings;
#ifdef YEOSSDK_EOSAchievement_generated_h
#error "EOSAchievement.generated.h already included, missing '#pragma once' in EOSAchievement.h"
#endif
#define YEOSSDK_EOSAchievement_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAchievements); \
	DECLARE_FUNCTION(execGetPlayerAchievements); \
	DECLARE_FUNCTION(execGetUnlockAchievements); \
	DECLARE_FUNCTION(execRequestQueryAchievementInfo); \
	DECLARE_FUNCTION(execRequestQueryPlayerAchievement); \
	DECLARE_FUNCTION(execRequestUnlock); \
	DECLARE_FUNCTION(execSetAchievementApiVersion); \
	DECLARE_FUNCTION(execSetupInternalCallback);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAchievements); \
	DECLARE_FUNCTION(execGetPlayerAchievements); \
	DECLARE_FUNCTION(execGetUnlockAchievements); \
	DECLARE_FUNCTION(execRequestQueryAchievementInfo); \
	DECLARE_FUNCTION(execRequestQueryPlayerAchievement); \
	DECLARE_FUNCTION(execRequestUnlock); \
	DECLARE_FUNCTION(execSetAchievementApiVersion); \
	DECLARE_FUNCTION(execSetupInternalCallback);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSAchievement(); \
	friend struct Z_Construct_UClass_UEOSAchievement_Statics; \
public: \
	DECLARE_CLASS(UEOSAchievement, UEOSStats, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSAchievement)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEOSAchievement(); \
	friend struct Z_Construct_UClass_UEOSAchievement_Statics; \
public: \
	DECLARE_CLASS(UEOSAchievement, UEOSStats, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSAchievement)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSAchievement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSAchievement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSAchievement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSAchievement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSAchievement(UEOSAchievement&&); \
	NO_API UEOSAchievement(const UEOSAchievement&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSAchievement(UEOSAchievement&&); \
	NO_API UEOSAchievement(const UEOSAchievement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSAchievement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSAchievement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSAchievement)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_12_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSAchievement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
