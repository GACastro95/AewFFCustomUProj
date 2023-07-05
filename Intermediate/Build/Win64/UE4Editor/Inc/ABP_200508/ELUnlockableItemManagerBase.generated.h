// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELUnlockItemSaveData;
struct FUnlockableItemParam;
enum class EUnlockItemCategory : uint8;
enum class EUnlockableItemPurchaseResult : uint8;
struct FUnavailableDlcData;
 struct FUnlockableItemParam;
class UDataTable;
class UObject;
 
#ifdef ABP_200508_ELUnlockableItemManagerBase_generated_h
#error "ELUnlockableItemManagerBase.generated.h already included, missing '#pragma once' in ELUnlockableItemManagerBase.h"
#endif
#define ABP_200508_ELUnlockableItemManagerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckEntitlementedDlc); \
	DECLARE_FUNCTION(execGetAllUnlockableItemSaveData); \
	DECLARE_FUNCTION(execGetCurrentAEW_CASH); \
	DECLARE_FUNCTION(execGetCurrentAEW_GOLD); \
	DECLARE_FUNCTION(execGetHotItemListFromAll); \
	DECLARE_FUNCTION(execGetHotItemListFromCategory); \
	DECLARE_FUNCTION(execGetHotItemListFromID); \
	DECLARE_FUNCTION(execGetPurchaseLastResult); \
	DECLARE_FUNCTION(execGetUnavailableDlcData); \
	DECLARE_FUNCTION(execGetUnlockableItemInfoFromFromCategory); \
	DECLARE_FUNCTION(execGetUnlockableItemInfoFromID); \
	DECLARE_FUNCTION(execGetUnlockableItemInfoFromIdList); \
	DECLARE_FUNCTION(execGetUnlockableItemList); \
	DECLARE_FUNCTION(execGetUnlockableItemListFromCategory); \
	DECLARE_FUNCTION(execGetUnlockableItemListFromID); \
	DECLARE_FUNCTION(execGetUnlockableItemMapFromID); \
	DECLARE_FUNCTION(execGetUnlockableItemSaveDataFromID); \
	DECLARE_FUNCTION(execGetUnlockableItemSaveDataFromIdList); \
	DECLARE_FUNCTION(execIsUpdatedUnlockData); \
	DECLARE_FUNCTION(execLockingItem); \
	DECLARE_FUNCTION(execLockingItemList); \
	DECLARE_FUNCTION(execOnAutoQueryEntitlementsComplete); \
	DECLARE_FUNCTION(execOnCheckedQueryEntitlements); \
	DECLARE_FUNCTION(execOnConsumeGold); \
	DECLARE_FUNCTION(execOnDownloadPossessedGold); \
	DECLARE_FUNCTION(execOnUploadPossessedGold); \
	DECLARE_FUNCTION(execRequestInstalledDlcItemCheck); \
	DECLARE_FUNCTION(execRequestQueryEntitlements); \
	DECLARE_FUNCTION(execRequestUnlockableItemPurchase); \
	DECLARE_FUNCTION(execSetCurrentAEW_GOLD); \
	DECLARE_FUNCTION(execSetupUnlockableItemDataTable); \
	DECLARE_FUNCTION(execSortUnlockItemParamMap); \
	DECLARE_FUNCTION(execUnlockingItem); \
	DECLARE_FUNCTION(execUnlockingItemList);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckEntitlementedDlc); \
	DECLARE_FUNCTION(execGetAllUnlockableItemSaveData); \
	DECLARE_FUNCTION(execGetCurrentAEW_CASH); \
	DECLARE_FUNCTION(execGetCurrentAEW_GOLD); \
	DECLARE_FUNCTION(execGetHotItemListFromAll); \
	DECLARE_FUNCTION(execGetHotItemListFromCategory); \
	DECLARE_FUNCTION(execGetHotItemListFromID); \
	DECLARE_FUNCTION(execGetPurchaseLastResult); \
	DECLARE_FUNCTION(execGetUnavailableDlcData); \
	DECLARE_FUNCTION(execGetUnlockableItemInfoFromFromCategory); \
	DECLARE_FUNCTION(execGetUnlockableItemInfoFromID); \
	DECLARE_FUNCTION(execGetUnlockableItemInfoFromIdList); \
	DECLARE_FUNCTION(execGetUnlockableItemList); \
	DECLARE_FUNCTION(execGetUnlockableItemListFromCategory); \
	DECLARE_FUNCTION(execGetUnlockableItemListFromID); \
	DECLARE_FUNCTION(execGetUnlockableItemMapFromID); \
	DECLARE_FUNCTION(execGetUnlockableItemSaveDataFromID); \
	DECLARE_FUNCTION(execGetUnlockableItemSaveDataFromIdList); \
	DECLARE_FUNCTION(execIsUpdatedUnlockData); \
	DECLARE_FUNCTION(execLockingItem); \
	DECLARE_FUNCTION(execLockingItemList); \
	DECLARE_FUNCTION(execOnAutoQueryEntitlementsComplete); \
	DECLARE_FUNCTION(execOnCheckedQueryEntitlements); \
	DECLARE_FUNCTION(execOnConsumeGold); \
	DECLARE_FUNCTION(execOnDownloadPossessedGold); \
	DECLARE_FUNCTION(execOnUploadPossessedGold); \
	DECLARE_FUNCTION(execRequestInstalledDlcItemCheck); \
	DECLARE_FUNCTION(execRequestQueryEntitlements); \
	DECLARE_FUNCTION(execRequestUnlockableItemPurchase); \
	DECLARE_FUNCTION(execSetCurrentAEW_GOLD); \
	DECLARE_FUNCTION(execSetupUnlockableItemDataTable); \
	DECLARE_FUNCTION(execSortUnlockItemParamMap); \
	DECLARE_FUNCTION(execUnlockingItem); \
	DECLARE_FUNCTION(execUnlockingItemList);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELUnlockableItemManagerBase(); \
	friend struct Z_Construct_UClass_UELUnlockableItemManagerBase_Statics; \
public: \
	DECLARE_CLASS(UELUnlockableItemManagerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELUnlockableItemManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUELUnlockableItemManagerBase(); \
	friend struct Z_Construct_UClass_UELUnlockableItemManagerBase_Statics; \
public: \
	DECLARE_CLASS(UELUnlockableItemManagerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELUnlockableItemManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELUnlockableItemManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELUnlockableItemManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELUnlockableItemManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELUnlockableItemManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELUnlockableItemManagerBase(UELUnlockableItemManagerBase&&); \
	NO_API UELUnlockableItemManagerBase(const UELUnlockableItemManagerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELUnlockableItemManagerBase(UELUnlockableItemManagerBase&&); \
	NO_API UELUnlockableItemManagerBase(const UELUnlockableItemManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELUnlockableItemManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELUnlockableItemManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELUnlockableItemManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AutoQueryEntitlementsCompleteTimer() { return STRUCT_OFFSET(UELUnlockableItemManagerBase, AutoQueryEntitlementsCompleteTimer); } \
	FORCEINLINE static uint32 __PPO__m_UnlockableItemParamList() { return STRUCT_OFFSET(UELUnlockableItemManagerBase, m_UnlockableItemParamList); } \
	FORCEINLINE static uint32 __PPO__m_RequestPurchaseItemIdList() { return STRUCT_OFFSET(UELUnlockableItemManagerBase, m_RequestPurchaseItemIdList); } \
	FORCEINLINE static uint32 __PPO__m_ConsumeGoldCoinItemList() { return STRUCT_OFFSET(UELUnlockableItemManagerBase, m_ConsumeGoldCoinItemList); } \
	FORCEINLINE static uint32 __PPO__m_ptrGoldCoinPossessManager() { return STRUCT_OFFSET(UELUnlockableItemManagerBase, m_ptrGoldCoinPossessManager); } \
	FORCEINLINE static uint32 __PPO__m_ItemInfoMap() { return STRUCT_OFFSET(UELUnlockableItemManagerBase, m_ItemInfoMap); } \
	FORCEINLINE static uint32 __PPO__m_BadgeIdSet() { return STRUCT_OFFSET(UELUnlockableItemManagerBase, m_BadgeIdSet); } \
	FORCEINLINE static uint32 __PPO__m_CheckInstalledDlcItemNames() { return STRUCT_OFFSET(UELUnlockableItemManagerBase, m_CheckInstalledDlcItemNames); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_19_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELUnlockableItemManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELUnlockableItemManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
