// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FShopGeneralItemManageData;
enum class EShopGeneralListScrollDirectionType : uint8;
struct FShopGeneralItemDisplayData;
struct FShopDisplayParam;
enum class EShopDisplayCategory : uint8;
#ifdef ELITE_ELShopGeneralWidgetBase_generated_h
#error "ELShopGeneralWidgetBase.generated.h already included, missing '#pragma once' in ELShopGeneralWidgetBase.h"
#endif
#define ELITE_ELShopGeneralWidgetBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeListViewType); \
	DECLARE_FUNCTION(execCheckValidNormalDisplayCursorIndex); \
	DECLARE_FUNCTION(execGetCurrentItemManageData); \
	DECLARE_FUNCTION(execGetCurrentListScrollDirectionType); \
	DECLARE_FUNCTION(execGetDisplayDataFromIndex); \
	DECLARE_FUNCTION(execGetDisplayItemNum); \
	DECLARE_FUNCTION(execGetNormalDisplayCursorIndex); \
	DECLARE_FUNCTION(execInitializeParameter); \
	DECLARE_FUNCTION(execIsItemSaleState); \
	DECLARE_FUNCTION(execIsMovedCursorLeft); \
	DECLARE_FUNCTION(execIsPurchasedItem); \
	DECLARE_FUNCTION(execPurchasedPostProcess); \
	DECLARE_FUNCTION(execSetCurrentListScrollDirectionType); \
	DECLARE_FUNCTION(execSetDisplayListNum); \
	DECLARE_FUNCTION(execSetNormalDisplayCursorIndex); \
	DECLARE_FUNCTION(execUpdateParameter);


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeListViewType); \
	DECLARE_FUNCTION(execCheckValidNormalDisplayCursorIndex); \
	DECLARE_FUNCTION(execGetCurrentItemManageData); \
	DECLARE_FUNCTION(execGetCurrentListScrollDirectionType); \
	DECLARE_FUNCTION(execGetDisplayDataFromIndex); \
	DECLARE_FUNCTION(execGetDisplayItemNum); \
	DECLARE_FUNCTION(execGetNormalDisplayCursorIndex); \
	DECLARE_FUNCTION(execInitializeParameter); \
	DECLARE_FUNCTION(execIsItemSaleState); \
	DECLARE_FUNCTION(execIsMovedCursorLeft); \
	DECLARE_FUNCTION(execIsPurchasedItem); \
	DECLARE_FUNCTION(execPurchasedPostProcess); \
	DECLARE_FUNCTION(execSetCurrentListScrollDirectionType); \
	DECLARE_FUNCTION(execSetDisplayListNum); \
	DECLARE_FUNCTION(execSetNormalDisplayCursorIndex); \
	DECLARE_FUNCTION(execUpdateParameter);


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_EVENT_PARMS \
	struct ELShopGeneralWidgetBase_eventOnChangeCategory_Parms \
	{ \
		int32 _addIndex; \
	}; \
	struct ELShopGeneralWidgetBase_eventOnPressedMoveTab_Parms \
	{ \
		bool _isLeft; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELShopGeneralWidgetBase(); \
	friend struct Z_Construct_UClass_UELShopGeneralWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELShopGeneralWidgetBase, UELMainMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELShopGeneralWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELShopGeneralWidgetBase(); \
	friend struct Z_Construct_UClass_UELShopGeneralWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELShopGeneralWidgetBase, UELMainMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELShopGeneralWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELShopGeneralWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELShopGeneralWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELShopGeneralWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELShopGeneralWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELShopGeneralWidgetBase(UELShopGeneralWidgetBase&&); \
	NO_API UELShopGeneralWidgetBase(const UELShopGeneralWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELShopGeneralWidgetBase(UELShopGeneralWidgetBase&&); \
	NO_API UELShopGeneralWidgetBase(const UELShopGeneralWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELShopGeneralWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELShopGeneralWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELShopGeneralWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_shopDisplayUnlockableItemMap() { return STRUCT_OFFSET(UELShopGeneralWidgetBase, m_shopDisplayUnlockableItemMap); } \
	FORCEINLINE static uint32 __PPO__m_itemManageDataList() { return STRUCT_OFFSET(UELShopGeneralWidgetBase, m_itemManageDataList); } \
	FORCEINLINE static uint32 __PPO__m_itemDisplayDataMap() { return STRUCT_OFFSET(UELShopGeneralWidgetBase, m_itemDisplayDataMap); }


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_11_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELShopGeneralWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELShopGeneralWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
