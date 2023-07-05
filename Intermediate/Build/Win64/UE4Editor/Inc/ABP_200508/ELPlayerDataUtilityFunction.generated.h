// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAddPossessItemQuantity;
struct FPossessedItemSaveData;
struct FELUnlockItemSaveData;
class UObject;
class USaveDataObjectBase;
class APlayerController;
class USaveDataObject_PlayerData;
enum class EMatchScoreRankingsType : uint8;
struct FMatchScoreRankingWrestlerInfo;
enum class EMiniGameID : uint8;
enum class EPossessedItemExtendTarget : uint8;
enum class EWrestlerID_N : uint8;
struct FMatchScoreRankingItemInfo;
struct FMiniGameScoreRankingItemInfo;
struct FGuid;
struct FKeyMapSettingData;
enum class EELBelt : uint8;
struct FELTitleHolderHistory_BP;
enum class EUnlockItemCategory : uint8;
 struct FELUnlockItemSaveData;
#ifdef ABP_200508_ELPlayerDataUtilityFunction_generated_h
#error "ELPlayerDataUtilityFunction.generated.h already included, missing '#pragma once' in ELPlayerDataUtilityFunction.h"
#endif
#define ABP_200508_ELPlayerDataUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCrateTicketNum); \
	DECLARE_FUNCTION(execAddPossessedItemQuantity); \
	DECLARE_FUNCTION(execAllUpdatePossessedItemSaveData); \
	DECLARE_FUNCTION(execAllUpdateUnlockItemSaveData); \
	DECLARE_FUNCTION(execApplyDefaultToPlayerData); \
	DECLARE_FUNCTION(execApplyKeyConfig); \
	DECLARE_FUNCTION(execApplySaveDataToPlayerData); \
	DECLARE_FUNCTION(execApplySSModeKeyConfig); \
	DECLARE_FUNCTION(execApplyTmpPlayerDataToSaveData); \
	DECLARE_FUNCTION(execDeleteMatchRecordsInvalidCAW); \
	DECLARE_FUNCTION(execDeleteScoreRankingInvalidCAW); \
	DECLARE_FUNCTION(execEntryMatchScoreRanking); \
	DECLARE_FUNCTION(execEntryMiniGameScoreRanking); \
	DECLARE_FUNCTION(execGetAddEditSlotNum); \
	DECLARE_FUNCTION(execGetAddEditSlotNumByWrestlerID); \
	DECLARE_FUNCTION(execGetAEWCashNum); \
	DECLARE_FUNCTION(execGetAllMatchScoreRankingItemList); \
	DECLARE_FUNCTION(execGetAllMiniGameScoreRankingItemList); \
	DECLARE_FUNCTION(execGetAllPossessedItemSaveData); \
	DECLARE_FUNCTION(execGetAllUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetCareerModePlayerGUID); \
	DECLARE_FUNCTION(execGetConfirmedEulaVer); \
	DECLARE_FUNCTION(execGetCrateTicketNum); \
	DECLARE_FUNCTION(execGetKeyConfig); \
	DECLARE_FUNCTION(execGetLocalAEWGoldNum); \
	DECLARE_FUNCTION(execGetMatchScoreRankingItemList); \
	DECLARE_FUNCTION(execGetMiniGameScoreRankingItemList); \
	DECLARE_FUNCTION(execGetPossessedItemSaveDataListFromId); \
	DECLARE_FUNCTION(execGetSSModeKeyConfigData); \
	DECLARE_FUNCTION(execGetTitleHolderHistoryList); \
	DECLARE_FUNCTION(execGetUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetUnlockItemSaveDataByCategory); \
	DECLARE_FUNCTION(execGetUnlockItemSaveDataByIdList); \
	DECLARE_FUNCTION(execGetUnlockItemSaveDataByIdMap); \
	DECLARE_FUNCTION(execSaveRequestKeyConfigDataOnly); \
	DECLARE_FUNCTION(execSaveRequestPlayerData); \
	DECLARE_FUNCTION(execSetAEWCashNum); \
	DECLARE_FUNCTION(execSetCareerModePlayerGUID); \
	DECLARE_FUNCTION(execSetConfirmedEulaVer); \
	DECLARE_FUNCTION(execSetKeyConfig); \
	DECLARE_FUNCTION(execSetLocalAEWGoldNum); \
	DECLARE_FUNCTION(execSetSSModeKeyConfigData); \
	DECLARE_FUNCTION(execUpdatePossessedItemSaveDataList); \
	DECLARE_FUNCTION(execUpdateUnlockItemSaveData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCrateTicketNum); \
	DECLARE_FUNCTION(execAddPossessedItemQuantity); \
	DECLARE_FUNCTION(execAllUpdatePossessedItemSaveData); \
	DECLARE_FUNCTION(execAllUpdateUnlockItemSaveData); \
	DECLARE_FUNCTION(execApplyDefaultToPlayerData); \
	DECLARE_FUNCTION(execApplyKeyConfig); \
	DECLARE_FUNCTION(execApplySaveDataToPlayerData); \
	DECLARE_FUNCTION(execApplySSModeKeyConfig); \
	DECLARE_FUNCTION(execApplyTmpPlayerDataToSaveData); \
	DECLARE_FUNCTION(execDeleteMatchRecordsInvalidCAW); \
	DECLARE_FUNCTION(execDeleteScoreRankingInvalidCAW); \
	DECLARE_FUNCTION(execEntryMatchScoreRanking); \
	DECLARE_FUNCTION(execEntryMiniGameScoreRanking); \
	DECLARE_FUNCTION(execGetAddEditSlotNum); \
	DECLARE_FUNCTION(execGetAddEditSlotNumByWrestlerID); \
	DECLARE_FUNCTION(execGetAEWCashNum); \
	DECLARE_FUNCTION(execGetAllMatchScoreRankingItemList); \
	DECLARE_FUNCTION(execGetAllMiniGameScoreRankingItemList); \
	DECLARE_FUNCTION(execGetAllPossessedItemSaveData); \
	DECLARE_FUNCTION(execGetAllUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetCareerModePlayerGUID); \
	DECLARE_FUNCTION(execGetConfirmedEulaVer); \
	DECLARE_FUNCTION(execGetCrateTicketNum); \
	DECLARE_FUNCTION(execGetKeyConfig); \
	DECLARE_FUNCTION(execGetLocalAEWGoldNum); \
	DECLARE_FUNCTION(execGetMatchScoreRankingItemList); \
	DECLARE_FUNCTION(execGetMiniGameScoreRankingItemList); \
	DECLARE_FUNCTION(execGetPossessedItemSaveDataListFromId); \
	DECLARE_FUNCTION(execGetSSModeKeyConfigData); \
	DECLARE_FUNCTION(execGetTitleHolderHistoryList); \
	DECLARE_FUNCTION(execGetUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetUnlockItemSaveDataByCategory); \
	DECLARE_FUNCTION(execGetUnlockItemSaveDataByIdList); \
	DECLARE_FUNCTION(execGetUnlockItemSaveDataByIdMap); \
	DECLARE_FUNCTION(execSaveRequestKeyConfigDataOnly); \
	DECLARE_FUNCTION(execSaveRequestPlayerData); \
	DECLARE_FUNCTION(execSetAEWCashNum); \
	DECLARE_FUNCTION(execSetCareerModePlayerGUID); \
	DECLARE_FUNCTION(execSetConfirmedEulaVer); \
	DECLARE_FUNCTION(execSetKeyConfig); \
	DECLARE_FUNCTION(execSetLocalAEWGoldNum); \
	DECLARE_FUNCTION(execSetSSModeKeyConfigData); \
	DECLARE_FUNCTION(execUpdatePossessedItemSaveDataList); \
	DECLARE_FUNCTION(execUpdateUnlockItemSaveData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELPlayerDataUtilityFunction(); \
	friend struct Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELPlayerDataUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPlayerDataUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUELPlayerDataUtilityFunction(); \
	friend struct Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELPlayerDataUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPlayerDataUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELPlayerDataUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELPlayerDataUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPlayerDataUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPlayerDataUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPlayerDataUtilityFunction(UELPlayerDataUtilityFunction&&); \
	NO_API UELPlayerDataUtilityFunction(const UELPlayerDataUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPlayerDataUtilityFunction(UELPlayerDataUtilityFunction&&); \
	NO_API UELPlayerDataUtilityFunction(const UELPlayerDataUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPlayerDataUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPlayerDataUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELPlayerDataUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_26_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELPlayerDataUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerDataUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
