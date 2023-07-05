// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYDebugMenuSubMenuBase;
struct FYDebugMenuSimpleUIParam;
struct FYDebugMenuSubMenuDefaultParam;
class UYDebugMenuRootBase;
#ifdef YDEBUG_YDebugMenuSubMenuBase_generated_h
#error "YDebugMenuSubMenuBase.generated.h already included, missing '#pragma once' in YDebugMenuSubMenuBase.h"
#endif
#define YDEBUG_YDebugMenuSubMenuBase_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSubMenu); \
	DECLARE_FUNCTION(execCreateSubMenu); \
	DECLARE_FUNCTION(execFindSimpleMenuUIRecursive); \
	DECLARE_FUNCTION(execFindSubMenu); \
	DECLARE_FUNCTION(execGetRegistKey); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execRemoveSubMenu); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execSetDefaultParam); \
	DECLARE_FUNCTION(execSetParentRoot); \
	DECLARE_FUNCTION(execSetParentSubMenu); \
	DECLARE_FUNCTION(execSetRegistKey); \
	DECLARE_FUNCTION(execUpdateSimpleMenuUIRecursive);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSubMenu); \
	DECLARE_FUNCTION(execCreateSubMenu); \
	DECLARE_FUNCTION(execFindSimpleMenuUIRecursive); \
	DECLARE_FUNCTION(execFindSubMenu); \
	DECLARE_FUNCTION(execGetRegistKey); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execRemoveSubMenu); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execSetDefaultParam); \
	DECLARE_FUNCTION(execSetParentRoot); \
	DECLARE_FUNCTION(execSetParentSubMenu); \
	DECLARE_FUNCTION(execSetRegistKey); \
	DECLARE_FUNCTION(execUpdateSimpleMenuUIRecursive);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYDebugMenuSubMenuBase(); \
	friend struct Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics; \
public: \
	DECLARE_CLASS(UYDebugMenuSubMenuBase, UYDebugMenuUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDebugMenuSubMenuBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUYDebugMenuSubMenuBase(); \
	friend struct Z_Construct_UClass_UYDebugMenuSubMenuBase_Statics; \
public: \
	DECLARE_CLASS(UYDebugMenuSubMenuBase, UYDebugMenuUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDebugMenuSubMenuBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYDebugMenuSubMenuBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYDebugMenuSubMenuBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDebugMenuSubMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDebugMenuSubMenuBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDebugMenuSubMenuBase(UYDebugMenuSubMenuBase&&); \
	NO_API UYDebugMenuSubMenuBase(const UYDebugMenuSubMenuBase&); \
public:


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDebugMenuSubMenuBase(UYDebugMenuSubMenuBase&&); \
	NO_API UYDebugMenuSubMenuBase(const UYDebugMenuSubMenuBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDebugMenuSubMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDebugMenuSubMenuBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYDebugMenuSubMenuBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cSubMenus() { return STRUCT_OFFSET(UYDebugMenuSubMenuBase, m_cSubMenus); } \
	FORCEINLINE static uint32 __PPO__m_cRefParentRoot() { return STRUCT_OFFSET(UYDebugMenuSubMenuBase, m_cRefParentRoot); } \
	FORCEINLINE static uint32 __PPO__m_cRefParentSubMenu() { return STRUCT_OFFSET(UYDebugMenuSubMenuBase, m_cRefParentSubMenu); }


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_11_PROLOG
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_INCLASS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YDEBUG_API UClass* StaticClass<class UYDebugMenuSubMenuBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuSubMenuBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
