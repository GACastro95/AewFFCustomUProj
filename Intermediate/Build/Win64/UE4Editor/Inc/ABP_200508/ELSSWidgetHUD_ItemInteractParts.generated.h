// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSPickupType : uint8;
enum class ESSRarity : uint8;
class UTexture2D;
enum class ESSInteractOperate : uint8;
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_ItemInteractParts_generated_h
#error "ELSSWidgetHUD_ItemInteractParts.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_ItemInteractParts.h"
#endif
#define ABP_200508_ELSSWidgetHUD_ItemInteractParts_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemName); \
	DECLARE_FUNCTION(execGetRarity); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetBareIcon); \
	DECLARE_FUNCTION(execSetInteractItem); \
	DECLARE_FUNCTION(execSetInventoryItem); \
	DECLARE_FUNCTION(execSetItemTexture);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemName); \
	DECLARE_FUNCTION(execGetRarity); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetBareIcon); \
	DECLARE_FUNCTION(execSetInteractItem); \
	DECLARE_FUNCTION(execSetInventoryItem); \
	DECLARE_FUNCTION(execSetItemTexture);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_EVENT_PARMS \
	struct ELSSWidgetHUD_ItemInteractParts_eventSetActText_Parms \
	{ \
		FString InItemNameText; \
	}; \
	struct ELSSWidgetHUD_ItemInteractParts_eventSetAttentionIconVisible_Parms \
	{ \
		bool inIsVisible; \
	}; \
	struct ELSSWidgetHUD_ItemInteractParts_eventSetButtonVisible_Parms \
	{ \
		bool inIsVisible; \
	}; \
	struct ELSSWidgetHUD_ItemInteractParts_eventSetItemDurability_Parms \
	{ \
		int32 InItemDurability; \
	}; \
	struct ELSSWidgetHUD_ItemInteractParts_eventSetItemName_Parms \
	{ \
		FString InItemNameText; \
	}; \
	struct ELSSWidgetHUD_ItemInteractParts_eventSetKeyConfig_Parms \
	{ \
		EKeyMappingType InKeyMapType; \
	}; \
	struct ELSSWidgetHUD_ItemInteractParts_eventSetRarityTexture_Parms \
	{ \
		ESSRarity inRarity; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_ItemInteractParts(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_ItemInteractParts, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_ItemInteractParts)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_ItemInteractParts(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_ItemInteractParts_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_ItemInteractParts, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_ItemInteractParts)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_ItemInteractParts(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_ItemInteractParts) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_ItemInteractParts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_ItemInteractParts); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_ItemInteractParts(UELSSWidgetHUD_ItemInteractParts&&); \
	NO_API UELSSWidgetHUD_ItemInteractParts(const UELSSWidgetHUD_ItemInteractParts&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_ItemInteractParts(UELSSWidgetHUD_ItemInteractParts&&); \
	NO_API UELSSWidgetHUD_ItemInteractParts(const UELSSWidgetHUD_ItemInteractParts&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_ItemInteractParts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_ItemInteractParts); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_ItemInteractParts)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayActiveAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, PlayActiveAnim); } \
	FORCEINLINE static uint32 __PPO__PlayInActiveAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, PlayInActiveAnim); } \
	FORCEINLINE static uint32 __PPO__IconImage() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, IconImage); } \
	FORCEINLINE static uint32 __PPO__ItemDurabilityWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, ItemDurabilityWidget); } \
	FORCEINLINE static uint32 __PPO__ArrowWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, ArrowWidget); } \
	FORCEINLINE static uint32 __PPO__CommandWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, CommandWidget); } \
	FORCEINLINE static uint32 __PPO__UnlockableItemRarityDataTable() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, UnlockableItemRarityDataTable); } \
	FORCEINLINE static uint32 __PPO__BareIconTexture() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, BareIconTexture); } \
	FORCEINLINE static uint32 __PPO__PreInventoryInteractOperate() { return STRUCT_OFFSET(UELSSWidgetHUD_ItemInteractParts, PreInventoryInteractOperate); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_16_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_ItemInteractParts>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ItemInteractParts_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
