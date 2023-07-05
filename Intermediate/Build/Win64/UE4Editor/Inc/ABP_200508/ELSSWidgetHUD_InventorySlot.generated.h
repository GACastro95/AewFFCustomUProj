// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSPickupType : uint8;
class UTexture2D;
enum class EKeyMappingType : uint8;
enum class ESSRarity : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_InventorySlot_generated_h
#error "ELSSWidgetHUD_InventorySlot.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_InventorySlot.h"
#endif
#define ABP_200508_ELSSWidgetHUD_InventorySlot_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execCheckDonePlayAnimations); \
	DECLARE_FUNCTION(execGetDurability); \
	DECLARE_FUNCTION(execGetIsSelected); \
	DECLARE_FUNCTION(execGetItemId); \
	DECLARE_FUNCTION(execGetPickupType); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execSetDurabilityValue); \
	DECLARE_FUNCTION(execSetDurabilityVisible); \
	DECLARE_FUNCTION(execSetEmpty); \
	DECLARE_FUNCTION(execSetGuideVisible); \
	DECLARE_FUNCTION(execSetSelectState); \
	DECLARE_FUNCTION(execSetThumbnail);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execCheckDonePlayAnimations); \
	DECLARE_FUNCTION(execGetDurability); \
	DECLARE_FUNCTION(execGetIsSelected); \
	DECLARE_FUNCTION(execGetItemId); \
	DECLARE_FUNCTION(execGetPickupType); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execSetDurabilityValue); \
	DECLARE_FUNCTION(execSetDurabilityVisible); \
	DECLARE_FUNCTION(execSetEmpty); \
	DECLARE_FUNCTION(execSetGuideVisible); \
	DECLARE_FUNCTION(execSetSelectState); \
	DECLARE_FUNCTION(execSetThumbnail);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_EVENT_PARMS \
	struct ELSSWidgetHUD_InventorySlot_eventSetDurability_Parms \
	{ \
		int32 inDurability; \
	}; \
	struct ELSSWidgetHUD_InventorySlot_eventSetKeyConfig_Parms \
	{ \
		EKeyMappingType InKeyMapType; \
		bool InIsLeft; \
	}; \
	struct ELSSWidgetHUD_InventorySlot_eventSetRarity_Parms \
	{ \
		ESSRarity inRarity; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_InventorySlot(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_InventorySlot, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_InventorySlot)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_InventorySlot(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_InventorySlot_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_InventorySlot, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_InventorySlot)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_InventorySlot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_InventorySlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_InventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_InventorySlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_InventorySlot(UELSSWidgetHUD_InventorySlot&&); \
	NO_API UELSSWidgetHUD_InventorySlot(const UELSSWidgetHUD_InventorySlot&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_InventorySlot(UELSSWidgetHUD_InventorySlot&&); \
	NO_API UELSSWidgetHUD_InventorySlot(const UELSSWidgetHUD_InventorySlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_InventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_InventorySlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_InventorySlot)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateActiveAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, StateActiveAnim); } \
	FORCEINLINE static uint32 __PPO__StateInActiveAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, StateInActiveAnim); } \
	FORCEINLINE static uint32 __PPO__EmptyAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, EmptyAnim); } \
	FORCEINLINE static uint32 __PPO__DurabilityWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, DurabilityWidget); } \
	FORCEINLINE static uint32 __PPO__GuideButtonWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, GuideButtonWidget); } \
	FORCEINLINE static uint32 __PPO__ItemThumbnailTexImage() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, ItemThumbnailTexImage); } \
	FORCEINLINE static uint32 __PPO__ItemThumbnailShadowImage() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, ItemThumbnailShadowImage); } \
	FORCEINLINE static uint32 __PPO__RarityTexImage() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, RarityTexImage); } \
	FORCEINLINE static uint32 __PPO__RarityTexAddImage() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, RarityTexAddImage); } \
	FORCEINLINE static uint32 __PPO__UnlockableItemRarityDataTable() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, UnlockableItemRarityDataTable); } \
	FORCEINLINE static uint32 __PPO__ItemId() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, ItemId); } \
	FORCEINLINE static uint32 __PPO__DurabilityValue() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, DurabilityValue); } \
	FORCEINLINE static uint32 __PPO__PickupType() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, PickupType); } \
	FORCEINLINE static uint32 __PPO__IsEmptyFlag() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, IsEmptyFlag); } \
	FORCEINLINE static uint32 __PPO__IsSelected() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, IsSelected); } \
	FORCEINLINE static uint32 __PPO__IsWatchGameMode() { return STRUCT_OFFSET(UELSSWidgetHUD_InventorySlot, IsWatchGameMode); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_InventorySlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InventorySlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
