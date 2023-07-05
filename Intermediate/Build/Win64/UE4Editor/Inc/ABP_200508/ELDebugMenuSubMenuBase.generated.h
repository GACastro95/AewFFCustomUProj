// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELDebugMenuSubMenuBase;
struct FELDebugMenuSimpleUIParam;
struct FELDebugMenuSubMenuDefaultParam;
class UELDebugMenuRootBase;
#ifdef ABP_200508_ELDebugMenuSubMenuBase_generated_h
#error "ELDebugMenuSubMenuBase.generated.h already included, missing '#pragma once' in ELDebugMenuSubMenuBase.h"
#endif
#define ABP_200508_ELDebugMenuSubMenuBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_RPC_WRAPPERS \
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


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELDebugMenuSubMenuBase(); \
	friend struct Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics; \
public: \
	DECLARE_CLASS(UELDebugMenuSubMenuBase, UELDebugMenuUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugMenuSubMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELDebugMenuSubMenuBase(); \
	friend struct Z_Construct_UClass_UELDebugMenuSubMenuBase_Statics; \
public: \
	DECLARE_CLASS(UELDebugMenuSubMenuBase, UELDebugMenuUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugMenuSubMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELDebugMenuSubMenuBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELDebugMenuSubMenuBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugMenuSubMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugMenuSubMenuBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugMenuSubMenuBase(UELDebugMenuSubMenuBase&&); \
	NO_API UELDebugMenuSubMenuBase(const UELDebugMenuSubMenuBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugMenuSubMenuBase(UELDebugMenuSubMenuBase&&); \
	NO_API UELDebugMenuSubMenuBase(const UELDebugMenuSubMenuBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugMenuSubMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugMenuSubMenuBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELDebugMenuSubMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cSubMenus() { return STRUCT_OFFSET(UELDebugMenuSubMenuBase, m_cSubMenus); } \
	FORCEINLINE static uint32 __PPO__m_cRefParentRoot() { return STRUCT_OFFSET(UELDebugMenuSubMenuBase, m_cRefParentRoot); } \
	FORCEINLINE static uint32 __PPO__m_cRefParentSubMenu() { return STRUCT_OFFSET(UELDebugMenuSubMenuBase, m_cRefParentSubMenu); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELDebugMenuSubMenuBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuSubMenuBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
