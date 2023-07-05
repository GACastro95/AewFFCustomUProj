// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSPickupType : uint8;
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_Inventory_generated_h
#error "ELSSWidgetHUD_Inventory.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_Inventory.h"
#endif
#define ABP_200508_ELSSWidgetHUD_Inventory_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyBareIconGuideState); \
	DECLARE_FUNCTION(execApplyInventoryIcon); \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execDeleteInventoryIcon); \
	DECLARE_FUNCTION(execGetItemName); \
	DECLARE_FUNCTION(execPlayInWeaponName); \
	DECLARE_FUNCTION(execSetInventoryIconValue); \
	DECLARE_FUNCTION(execSetInventoryLimit); \
	DECLARE_FUNCTION(execSetInventoryPosition); \
	DECLARE_FUNCTION(execSetSlotKeyConfig); \
	DECLARE_FUNCTION(execSetVisibleOperationButton);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyBareIconGuideState); \
	DECLARE_FUNCTION(execApplyInventoryIcon); \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execDeleteInventoryIcon); \
	DECLARE_FUNCTION(execGetItemName); \
	DECLARE_FUNCTION(execPlayInWeaponName); \
	DECLARE_FUNCTION(execSetInventoryIconValue); \
	DECLARE_FUNCTION(execSetInventoryLimit); \
	DECLARE_FUNCTION(execSetInventoryPosition); \
	DECLARE_FUNCTION(execSetSlotKeyConfig); \
	DECLARE_FUNCTION(execSetVisibleOperationButton);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_EVENT_PARMS \
	struct ELSSWidgetHUD_Inventory_eventSetWeaponName_Parms \
	{ \
		FString InWeaponName; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_Inventory(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_Inventory, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_Inventory)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_Inventory(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_Inventory_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_Inventory, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_Inventory)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_Inventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_Inventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_Inventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_Inventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_Inventory(UELSSWidgetHUD_Inventory&&); \
	NO_API UELSSWidgetHUD_Inventory(const UELSSWidgetHUD_Inventory&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_Inventory(UELSSWidgetHUD_Inventory&&); \
	NO_API UELSSWidgetHUD_Inventory(const UELSSWidgetHUD_Inventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_Inventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_Inventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_Inventory)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayInWeaponNameAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_Inventory, PlayInWeaponNameAnim); } \
	FORCEINLINE static uint32 __PPO__SlotWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_Inventory, SlotWidget); } \
	FORCEINLINE static uint32 __PPO__SelectSlotIndex() { return STRUCT_OFFSET(UELSSWidgetHUD_Inventory, SelectSlotIndex); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_Inventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
