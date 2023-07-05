// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELDebugMenuManager;
class UELDebugMenuRootBase;
class UELDebugMenuSubMenuBase;
class APlayerController;
class UObject;
class UWorld;
#ifdef ABP_200508_ELDebugMenuManager_generated_h
#error "ELDebugMenuManager.generated.h already included, missing '#pragma once' in ELDebugMenuManager.h"
#endif
#define ABP_200508_ELDebugMenuManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearELDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execCreateELDebugMenuManager); \
	DECLARE_FUNCTION(execCreateELDebugMenuRootBase); \
	DECLARE_FUNCTION(execCreateELDebugSubMenu); \
	DECLARE_FUNCTION(execELResetImGuiInputFlags); \
	DECLARE_FUNCTION(execELResetWidget); \
	DECLARE_FUNCTION(execFindRoot); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetELDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execGetWorldForBP); \
	DECLARE_FUNCTION(execIsEnableELDebugCamera); \
	DECLARE_FUNCTION(execIsEnableELDebugMenuSystem); \
	DECLARE_FUNCTION(execIsEnableIngameELDebugMenu); \
	DECLARE_FUNCTION(execIsEnableInputForImGui); \
	DECLARE_FUNCTION(execIsShowChildUI); \
	DECLARE_FUNCTION(execIsShowMenu); \
	DECLARE_FUNCTION(execLoadJsonForELDebugMenuManager); \
	DECLARE_FUNCTION(execRegistRoot); \
	DECLARE_FUNCTION(execScreenShot); \
	DECLARE_FUNCTION(execSetELDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execSetEnableInputForImGui); \
	DECLARE_FUNCTION(execSetPlayerController); \
	DECLARE_FUNCTION(execSetShowMenu); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execUnregistRoot);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearELDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execCreateELDebugMenuManager); \
	DECLARE_FUNCTION(execCreateELDebugMenuRootBase); \
	DECLARE_FUNCTION(execCreateELDebugSubMenu); \
	DECLARE_FUNCTION(execELResetImGuiInputFlags); \
	DECLARE_FUNCTION(execELResetWidget); \
	DECLARE_FUNCTION(execFindRoot); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetELDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execGetWorldForBP); \
	DECLARE_FUNCTION(execIsEnableELDebugCamera); \
	DECLARE_FUNCTION(execIsEnableELDebugMenuSystem); \
	DECLARE_FUNCTION(execIsEnableIngameELDebugMenu); \
	DECLARE_FUNCTION(execIsEnableInputForImGui); \
	DECLARE_FUNCTION(execIsShowChildUI); \
	DECLARE_FUNCTION(execIsShowMenu); \
	DECLARE_FUNCTION(execLoadJsonForELDebugMenuManager); \
	DECLARE_FUNCTION(execRegistRoot); \
	DECLARE_FUNCTION(execScreenShot); \
	DECLARE_FUNCTION(execSetELDebugMenuManagerGlobalInstance); \
	DECLARE_FUNCTION(execSetEnableInputForImGui); \
	DECLARE_FUNCTION(execSetPlayerController); \
	DECLARE_FUNCTION(execSetShowMenu); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execUnregistRoot);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELDebugMenuManager(); \
	friend struct Z_Construct_UClass_UELDebugMenuManager_Statics; \
public: \
	DECLARE_CLASS(UELDebugMenuManager, UELDBG_ReferBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugMenuManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELDebugMenuManager(); \
	friend struct Z_Construct_UClass_UELDebugMenuManager_Statics; \
public: \
	DECLARE_CLASS(UELDebugMenuManager, UELDBG_ReferBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugMenuManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELDebugMenuManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELDebugMenuManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugMenuManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugMenuManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugMenuManager(UELDebugMenuManager&&); \
	NO_API UELDebugMenuManager(const UELDebugMenuManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugMenuManager(UELDebugMenuManager&&); \
	NO_API UELDebugMenuManager(const UELDebugMenuManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugMenuManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugMenuManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELDebugMenuManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELDebugMenuManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
