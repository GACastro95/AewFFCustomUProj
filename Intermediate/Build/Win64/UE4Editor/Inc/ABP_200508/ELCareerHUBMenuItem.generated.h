// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerItemData;
enum class ECareerItemEffect : uint8;
enum class ECareerItemPurchaseState : uint8;
enum class ECareerHubMenuDefaultTabBottomHelp : uint8;
#ifdef ABP_200508_ELCareerHUBMenuItem_generated_h
#error "ELCareerHUBMenuItem.generated.h already included, missing '#pragma once' in ELCareerHUBMenuItem.h"
#endif
#define ABP_200508_ELCareerHUBMenuItem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanPurchaseItem); \
	DECLARE_FUNCTION(execCheckMomentumEffect); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetPurchasableTShirt); \
	DECLARE_FUNCTION(execGetPurchaseItemState); \
	DECLARE_FUNCTION(execIsMenuTop); \
	DECLARE_FUNCTION(execOnHoverdCursor); \
	DECLARE_FUNCTION(execOpenMenuLR); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execSetCanMoveCursor);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanPurchaseItem); \
	DECLARE_FUNCTION(execCheckMomentumEffect); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetPurchasableTShirt); \
	DECLARE_FUNCTION(execGetPurchaseItemState); \
	DECLARE_FUNCTION(execIsMenuTop); \
	DECLARE_FUNCTION(execOnHoverdCursor); \
	DECLARE_FUNCTION(execOpenMenuLR); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execSetCanMoveCursor);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_EVENT_PARMS \
	struct ELCareerHUBMenuItem_eventDefaultTabBottomHelp_Parms \
	{ \
		ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp; \
	}; \
	struct ELCareerHUBMenuItem_eventOnChangeSaveAndExit_Parms \
	{ \
		bool bFlag; \
	}; \
	struct ELCareerHUBMenuItem_eventOnPressedMoveTab_Parms \
	{ \
		bool _isLeft; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerHUBMenuItem(); \
	friend struct Z_Construct_UClass_UELCareerHUBMenuItem_Statics; \
public: \
	DECLARE_CLASS(UELCareerHUBMenuItem, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerHUBMenuItem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerHUBMenuItem(); \
	friend struct Z_Construct_UClass_UELCareerHUBMenuItem_Statics; \
public: \
	DECLARE_CLASS(UELCareerHUBMenuItem, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerHUBMenuItem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerHUBMenuItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerHUBMenuItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerHUBMenuItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerHUBMenuItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerHUBMenuItem(UELCareerHUBMenuItem&&); \
	NO_API UELCareerHUBMenuItem(const UELCareerHUBMenuItem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerHUBMenuItem(UELCareerHUBMenuItem&&); \
	NO_API UELCareerHUBMenuItem(const UELCareerHUBMenuItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerHUBMenuItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerHUBMenuItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerHUBMenuItem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumHorizontalItems() { return STRUCT_OFFSET(UELCareerHUBMenuItem, NumHorizontalItems); } \
	FORCEINLINE static uint32 __PPO__NumVerticalItems() { return STRUCT_OFFSET(UELCareerHUBMenuItem, NumVerticalItems); } \
	FORCEINLINE static uint32 __PPO__CurrentMode() { return STRUCT_OFFSET(UELCareerHUBMenuItem, CurrentMode); } \
	FORCEINLINE static uint32 __PPO__Operation() { return STRUCT_OFFSET(UELCareerHUBMenuItem, Operation); } \
	FORCEINLINE static uint32 __PPO__TShirtData() { return STRUCT_OFFSET(UELCareerHUBMenuItem, TShirtData); } \
	FORCEINLINE static uint32 __PPO__m_bOpenDirLeft() { return STRUCT_OFFSET(UELCareerHUBMenuItem, m_bOpenDirLeft); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_14_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerHUBMenuItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerHUBMenuItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
