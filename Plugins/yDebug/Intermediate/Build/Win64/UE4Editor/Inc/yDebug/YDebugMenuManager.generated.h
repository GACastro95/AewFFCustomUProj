// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYDebugMenuManager;
class UYDebugMenuRootBase;
class UYDebugMenuSubMenuBase;
class APlayerController;
class UWorld;
#ifdef YDEBUG_YDebugMenuManager_generated_h
#error "YDebugMenuManager.generated.h already included, missing '#pragma once' in YDebugMenuManager.h"
#endif
#define YDEBUG_YDebugMenuManager_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execCreateYDebugMenuManager); \
	DECLARE_FUNCTION(execCreateYDebugMenuRootBase); \
	DECLARE_FUNCTION(execCreateYDebugSubMenu); \
	DECLARE_FUNCTION(execFindRoot); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execIsEnableDebugCamera); \
	DECLARE_FUNCTION(execIsEnableDebugMenuSystem); \
	DECLARE_FUNCTION(execIsEnableIngameDebugMenu); \
	DECLARE_FUNCTION(execIsEnableInputForImGui); \
	DECLARE_FUNCTION(execIsEnableMainMenuDebugMenu); \
	DECLARE_FUNCTION(execIsShowChildUI); \
	DECLARE_FUNCTION(execIsShowMenu); \
	DECLARE_FUNCTION(execLoadJsonForDebugMenuManager); \
	DECLARE_FUNCTION(execRegistRoot); \
	DECLARE_FUNCTION(execResetImGuiInputFlags); \
	DECLARE_FUNCTION(execResetWidget); \
	DECLARE_FUNCTION(execScreenShot); \
	DECLARE_FUNCTION(execSetDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execSetEnableInputForImGui); \
	DECLARE_FUNCTION(execSetPlayerController); \
	DECLARE_FUNCTION(execSetShowMenu); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execUnregistRoot);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execCreateYDebugMenuManager); \
	DECLARE_FUNCTION(execCreateYDebugMenuRootBase); \
	DECLARE_FUNCTION(execCreateYDebugSubMenu); \
	DECLARE_FUNCTION(execFindRoot); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execIsEnableDebugCamera); \
	DECLARE_FUNCTION(execIsEnableDebugMenuSystem); \
	DECLARE_FUNCTION(execIsEnableIngameDebugMenu); \
	DECLARE_FUNCTION(execIsEnableInputForImGui); \
	DECLARE_FUNCTION(execIsEnableMainMenuDebugMenu); \
	DECLARE_FUNCTION(execIsShowChildUI); \
	DECLARE_FUNCTION(execIsShowMenu); \
	DECLARE_FUNCTION(execLoadJsonForDebugMenuManager); \
	DECLARE_FUNCTION(execRegistRoot); \
	DECLARE_FUNCTION(execResetImGuiInputFlags); \
	DECLARE_FUNCTION(execResetWidget); \
	DECLARE_FUNCTION(execScreenShot); \
	DECLARE_FUNCTION(execSetDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execSetEnableInputForImGui); \
	DECLARE_FUNCTION(execSetPlayerController); \
	DECLARE_FUNCTION(execSetShowMenu); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execUnregistRoot);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYDebugMenuManager(); \
	friend struct Z_Construct_UClass_UYDebugMenuManager_Statics; \
public: \
	DECLARE_CLASS(UYDebugMenuManager, UYDBG_ReferBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDebugMenuManager)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUYDebugMenuManager(); \
	friend struct Z_Construct_UClass_UYDebugMenuManager_Statics; \
public: \
	DECLARE_CLASS(UYDebugMenuManager, UYDBG_ReferBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDebugMenuManager)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYDebugMenuManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYDebugMenuManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDebugMenuManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDebugMenuManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDebugMenuManager(UYDebugMenuManager&&); \
	NO_API UYDebugMenuManager(const UYDebugMenuManager&); \
public:


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDebugMenuManager(UYDebugMenuManager&&); \
	NO_API UYDebugMenuManager(const UYDebugMenuManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDebugMenuManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDebugMenuManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYDebugMenuManager)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cRootMenus() { return STRUCT_OFFSET(UYDebugMenuManager, m_cRootMenus); } \
	FORCEINLINE static uint32 __PPO__m_pcController() { return STRUCT_OFFSET(UYDebugMenuManager, m_pcController); } \
	FORCEINLINE static uint32 __PPO__m_cPadActiveMenu() { return STRUCT_OFFSET(UYDebugMenuManager, m_cPadActiveMenu); }


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_12_PROLOG
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_INCLASS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YDEBUG_API UClass* StaticClass<class UYDebugMenuManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
