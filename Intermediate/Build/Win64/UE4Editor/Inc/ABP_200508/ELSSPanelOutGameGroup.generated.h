// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELSSPanelOutGameBase;
enum class EOutGamePanelEventType : uint8;
class AELSSUIManagerBase;
class UUserWidget;
#ifdef ABP_200508_ELSSPanelOutGameGroup_generated_h
#error "ELSSPanelOutGameGroup.generated.h already included, missing '#pragma once' in ELSSPanelOutGameGroup.h"
#endif
#define ABP_200508_ELSSPanelOutGameGroup_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPanelGroup); \
	DECLARE_FUNCTION(execGetActivePanel); \
	DECLARE_FUNCTION(execIsParentPanekInputEnable); \
	DECLARE_FUNCTION(execIsSwapPanel); \
	DECLARE_FUNCTION(execOnSwapPanelEvent); \
	DECLARE_FUNCTION(execSelectActivePanelToListId); \
	DECLARE_FUNCTION(execSetupPanelGroup); \
	DECLARE_FUNCTION(execSetVisibleGroupAll);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPanelGroup); \
	DECLARE_FUNCTION(execGetActivePanel); \
	DECLARE_FUNCTION(execIsParentPanekInputEnable); \
	DECLARE_FUNCTION(execIsSwapPanel); \
	DECLARE_FUNCTION(execOnSwapPanelEvent); \
	DECLARE_FUNCTION(execSelectActivePanelToListId); \
	DECLARE_FUNCTION(execSetupPanelGroup); \
	DECLARE_FUNCTION(execSetVisibleGroupAll);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSPanelOutGameGroup(); \
	friend struct Z_Construct_UClass_UELSSPanelOutGameGroup_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelOutGameGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelOutGameGroup)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELSSPanelOutGameGroup(); \
	friend struct Z_Construct_UClass_UELSSPanelOutGameGroup_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelOutGameGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelOutGameGroup)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSPanelOutGameGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSPanelOutGameGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelOutGameGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelOutGameGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelOutGameGroup(UELSSPanelOutGameGroup&&); \
	NO_API UELSSPanelOutGameGroup(const UELSSPanelOutGameGroup&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelOutGameGroup(UELSSPanelOutGameGroup&&); \
	NO_API UELSSPanelOutGameGroup(const UELSSPanelOutGameGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelOutGameGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelOutGameGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSPanelOutGameGroup)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__grpOutGamePaneList() { return STRUCT_OFFSET(UELSSPanelOutGameGroup, grpOutGamePaneList); } \
	FORCEINLINE static uint32 __PPO__grpActivePanelNow() { return STRUCT_OFFSET(UELSSPanelOutGameGroup, grpActivePanelNow); } \
	FORCEINLINE static uint32 __PPO__grpActivePanelPrev() { return STRUCT_OFFSET(UELSSPanelOutGameGroup, grpActivePanelPrev); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSPanelOutGameGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
