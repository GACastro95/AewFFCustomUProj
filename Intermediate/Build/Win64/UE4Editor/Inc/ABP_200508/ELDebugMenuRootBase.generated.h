// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELDebugMenuShortcutKeySettings;
enum class EELDebugMenuShortcutType : uint8;
class UELDebugMenuSubMenuBase;
class UELDebugMenuRootBase;
struct FELDebugMenuSimpleUIParam;
class APlayerController;
struct FELDebugMenuRootDefaultParam;
class UELDebugMenuManager;
#ifdef ABP_200508_ELDebugMenuRootBase_generated_h
#error "ELDebugMenuRootBase.generated.h already included, missing '#pragma once' in ELDebugMenuRootBase.h"
#endif
#define ABP_200508_ELDebugMenuRootBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddShortcut); \
	DECLARE_FUNCTION(execAddSubMenu); \
	DECLARE_FUNCTION(execAddSubRootMenu); \
	DECLARE_FUNCTION(execBindActionCore); \
	DECLARE_FUNCTION(execBindChangedOpenFlag); \
	DECLARE_FUNCTION(execBindDrawCore); \
	DECLARE_FUNCTION(execCreateSubMenu); \
	DECLARE_FUNCTION(execCreateSubRootMenu); \
	DECLARE_FUNCTION(execFindSimpleMenuUIRecursive); \
	DECLARE_FUNCTION(execFindSubMenu); \
	DECLARE_FUNCTION(execFindSubRootMenu); \
	DECLARE_FUNCTION(execGetMenuTitle); \
	DECLARE_FUNCTION(execGetRegistKey); \
	DECLARE_FUNCTION(execInitDebugMenuRootBase); \
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


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddShortcut); \
	DECLARE_FUNCTION(execAddSubMenu); \
	DECLARE_FUNCTION(execAddSubRootMenu); \
	DECLARE_FUNCTION(execBindActionCore); \
	DECLARE_FUNCTION(execBindChangedOpenFlag); \
	DECLARE_FUNCTION(execBindDrawCore); \
	DECLARE_FUNCTION(execCreateSubMenu); \
	DECLARE_FUNCTION(execCreateSubRootMenu); \
	DECLARE_FUNCTION(execFindSimpleMenuUIRecursive); \
	DECLARE_FUNCTION(execFindSubMenu); \
	DECLARE_FUNCTION(execFindSubRootMenu); \
	DECLARE_FUNCTION(execGetMenuTitle); \
	DECLARE_FUNCTION(execGetRegistKey); \
	DECLARE_FUNCTION(execInitDebugMenuRootBase); \
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


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELDebugMenuRootBase(); \
	friend struct Z_Construct_UClass_UELDebugMenuRootBase_Statics; \
public: \
	DECLARE_CLASS(UELDebugMenuRootBase, UELDebugMenuUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugMenuRootBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELDebugMenuRootBase(); \
	friend struct Z_Construct_UClass_UELDebugMenuRootBase_Statics; \
public: \
	DECLARE_CLASS(UELDebugMenuRootBase, UELDebugMenuUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugMenuRootBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELDebugMenuRootBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELDebugMenuRootBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugMenuRootBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugMenuRootBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugMenuRootBase(UELDebugMenuRootBase&&); \
	NO_API UELDebugMenuRootBase(const UELDebugMenuRootBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugMenuRootBase(UELDebugMenuRootBase&&); \
	NO_API UELDebugMenuRootBase(const UELDebugMenuRootBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugMenuRootBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugMenuRootBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELDebugMenuRootBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cSubRootMenus() { return STRUCT_OFFSET(UELDebugMenuRootBase, m_cSubRootMenus); } \
	FORCEINLINE static uint32 __PPO__m_cSubMenus() { return STRUCT_OFFSET(UELDebugMenuRootBase, m_cSubMenus); } \
	FORCEINLINE static uint32 __PPO__m_cRefParentManager() { return STRUCT_OFFSET(UELDebugMenuRootBase, m_cRefParentManager); } \
	FORCEINLINE static uint32 __PPO__m_cRefParentRoot() { return STRUCT_OFFSET(UELDebugMenuRootBase, m_cRefParentRoot); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_15_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELDebugMenuRootBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuRootBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
