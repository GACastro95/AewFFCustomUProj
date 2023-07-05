// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDebugMenuShortcutKeySettings;
enum class EYDebugMenuShortcutType : uint8;
class UYDebugMenuSubMenuBase;
class UYDebugMenuRootBase;
struct FYDebugMenuSimpleUIParam;
class APlayerController;
struct FYDebugMenuRootDefaultParam;
class UYDebugMenuManager;
#ifdef YDEBUG_YDebugMenuRootBase_generated_h
#error "YDebugMenuRootBase.generated.h already included, missing '#pragma once' in YDebugMenuRootBase.h"
#endif
#define YDEBUG_YDebugMenuRootBase_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddShortcut); \
	DECLARE_FUNCTION(execAddSubMenu); \
	DECLARE_FUNCTION(execAddSubRootMenu); \
	DECLARE_FUNCTION(execCreateSubMenu); \
	DECLARE_FUNCTION(execCreateSubRootMenu); \
	DECLARE_FUNCTION(execFindSimpleMenuUIRecursive); \
	DECLARE_FUNCTION(execFindSubMenu); \
	DECLARE_FUNCTION(execFindSubRootMenu); \
	DECLARE_FUNCTION(execGetMenuTitle); \
	DECLARE_FUNCTION(execGetRegistKey); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsGamePadFocus); \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execIsPressedShortcutKey); \
	DECLARE_FUNCTION(execRemoveSubMenu); \
	DECLARE_FUNCTION(execRemoveSubRootMenu); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execSetDefaultParam); \
	DECLARE_FUNCTION(execSetGamePadFocus); \
	DECLARE_FUNCTION(execSetMenuTitle); \
	DECLARE_FUNCTION(execSetOpenFlag); \
	DECLARE_FUNCTION(execSetParent); \
	DECLARE_FUNCTION(execSetParentRootMenu); \
	DECLARE_FUNCTION(execSetRegistKey); \
	DECLARE_FUNCTION(execSetShortcut); \
	DECLARE_FUNCTION(execUpdateSimpleMenuUIRecursive);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddShortcut); \
	DECLARE_FUNCTION(execAddSubMenu); \
	DECLARE_FUNCTION(execAddSubRootMenu); \
	DECLARE_FUNCTION(execCreateSubMenu); \
	DECLARE_FUNCTION(execCreateSubRootMenu); \
	DECLARE_FUNCTION(execFindSimpleMenuUIRecursive); \
	DECLARE_FUNCTION(execFindSubMenu); \
	DECLARE_FUNCTION(execFindSubRootMenu); \
	DECLARE_FUNCTION(execGetMenuTitle); \
	DECLARE_FUNCTION(execGetRegistKey); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsGamePadFocus); \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execIsPressedShortcutKey); \
	DECLARE_FUNCTION(execRemoveSubMenu); \
	DECLARE_FUNCTION(execRemoveSubRootMenu); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execSetDefaultParam); \
	DECLARE_FUNCTION(execSetGamePadFocus); \
	DECLARE_FUNCTION(execSetMenuTitle); \
	DECLARE_FUNCTION(execSetOpenFlag); \
	DECLARE_FUNCTION(execSetParent); \
	DECLARE_FUNCTION(execSetParentRootMenu); \
	DECLARE_FUNCTION(execSetRegistKey); \
	DECLARE_FUNCTION(execSetShortcut); \
	DECLARE_FUNCTION(execUpdateSimpleMenuUIRecursive);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYDebugMenuRootBase(); \
	friend struct Z_Construct_UClass_UYDebugMenuRootBase_Statics; \
public: \
	DECLARE_CLASS(UYDebugMenuRootBase, UYDebugMenuUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDebugMenuRootBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUYDebugMenuRootBase(); \
	friend struct Z_Construct_UClass_UYDebugMenuRootBase_Statics; \
public: \
	DECLARE_CLASS(UYDebugMenuRootBase, UYDebugMenuUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDebugMenuRootBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYDebugMenuRootBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYDebugMenuRootBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDebugMenuRootBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDebugMenuRootBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDebugMenuRootBase(UYDebugMenuRootBase&&); \
	NO_API UYDebugMenuRootBase(const UYDebugMenuRootBase&); \
public:


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDebugMenuRootBase(UYDebugMenuRootBase&&); \
	NO_API UYDebugMenuRootBase(const UYDebugMenuRootBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDebugMenuRootBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDebugMenuRootBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYDebugMenuRootBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cSubRootMenus() { return STRUCT_OFFSET(UYDebugMenuRootBase, m_cSubRootMenus); } \
	FORCEINLINE static uint32 __PPO__m_cSubMenus() { return STRUCT_OFFSET(UYDebugMenuRootBase, m_cSubMenus); } \
	FORCEINLINE static uint32 __PPO__m_cRefParentManager() { return STRUCT_OFFSET(UYDebugMenuRootBase, m_cRefParentManager); } \
	FORCEINLINE static uint32 __PPO__m_cRefParentRoot() { return STRUCT_OFFSET(UYDebugMenuRootBase, m_cRefParentRoot); }


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_15_PROLOG
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_INCLASS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YDEBUG_API UClass* StaticClass<class UYDebugMenuRootBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuRootBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
