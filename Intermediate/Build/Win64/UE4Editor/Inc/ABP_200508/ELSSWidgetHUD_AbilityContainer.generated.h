// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_AbilityContainer_generated_h
#error "ELSSWidgetHUD_AbilityContainer.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_AbilityContainer.h"
#endif
#define ABP_200508_ELSSWidgetHUD_AbilityContainer_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execResetAllAbilities); \
	DECLARE_FUNCTION(execSetHoldButtonVisible); \
	DECLARE_FUNCTION(execSetVisibleAbility); \
	DECLARE_FUNCTION(execSetVisibleGuide);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execResetAllAbilities); \
	DECLARE_FUNCTION(execSetHoldButtonVisible); \
	DECLARE_FUNCTION(execSetVisibleAbility); \
	DECLARE_FUNCTION(execSetVisibleGuide);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_EVENT_PARMS \
	struct ELSSWidgetHUD_AbilityContainer_eventSetKeyConfig_Parms \
	{ \
		EKeyMappingType InKeyMapType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AbilityContainer(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AbilityContainer, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AbilityContainer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AbilityContainer(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AbilityContainer, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AbilityContainer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_AbilityContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_AbilityContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AbilityContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AbilityContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AbilityContainer(UELSSWidgetHUD_AbilityContainer&&); \
	NO_API UELSSWidgetHUD_AbilityContainer(const UELSSWidgetHUD_AbilityContainer&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AbilityContainer(UELSSWidgetHUD_AbilityContainer&&); \
	NO_API UELSSWidgetHUD_AbilityContainer(const UELSSWidgetHUD_AbilityContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AbilityContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AbilityContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_AbilityContainer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SlotWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, SlotWidget); } \
	FORCEINLINE static uint32 __PPO__FontAbilityWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, FontAbilityWidget); } \
	FORCEINLINE static uint32 __PPO__FontHoldWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, FontHoldWidget); } \
	FORCEINLINE static uint32 __PPO__AbilityWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, AbilityWidget); } \
	FORCEINLINE static uint32 __PPO__SlotVisible() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, SlotVisible); } \
	FORCEINLINE static uint32 __PPO__SlotVisibleNum() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, SlotVisibleNum); } \
	FORCEINLINE static uint32 __PPO__IsWatchGameMode() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, IsWatchGameMode); } \
	FORCEINLINE static uint32 __PPO__CanSwichGuideButton() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, CanSwichGuideButton); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_AbilityContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilityContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
