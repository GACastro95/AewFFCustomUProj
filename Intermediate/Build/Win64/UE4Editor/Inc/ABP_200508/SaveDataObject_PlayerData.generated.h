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
struct FGuid;
struct FChallengeProgressSaveData;
struct FChallengeRecordSaveData;
enum class EChallengeSaveDataType : uint8;
struct FMatchScoreRankingSaveDataArray;
struct FMiniGameScoreRankingSaveDataArray;
struct FOnlyNormalChallengeRecordSaveData;
enum class EUnlockItemCategory : uint8;
#ifdef ABP_200508_SaveDataObject_PlayerData_generated_h
#error "SaveDataObject_PlayerData.generated.h already included, missing '#pragma once' in SaveDataObject_PlayerData.h"
#endif
#define ABP_200508_SaveDataObject_PlayerData_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPossessedItemQuantity); \
	DECLARE_FUNCTION(execAllUpdatePossessedItemSaveData); \
	DECLARE_FUNCTION(execAllUpdateUnlockItemSaveData); \
	DECLARE_FUNCTION(execCreatePossessedItemSaveData); \
	DECLARE_FUNCTION(execCreateUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetAewCash); \
	DECLARE_FUNCTION(execGetAEWGold); \
	DECLARE_FUNCTION(execGetAllPossessedItemSaveData); \
	DECLARE_FUNCTION(execGetAllUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetCareerModeWrestlerGUID); \
	DECLARE_FUNCTION(execGetChallengeProgressSaveData); \
	DECLARE_FUNCTION(execGetChallengeRecordSaveData); \
	DECLARE_FUNCTION(execGetChallengeRecordSaveDataList); \
	DECLARE_FUNCTION(execGetConfirmedEULA_Version); \
	DECLARE_FUNCTION(execGetEpicAccountID); \
	DECLARE_FUNCTION(execGetMatchScoreRanking); \
	DECLARE_FUNCTION(execGetMiniGameScoreRanking); \
	DECLARE_FUNCTION(execGetOnlyNormalChallengeRecordSaveData); \
	DECLARE_FUNCTION(execGetPossessedItemSaveData); \
	DECLARE_FUNCTION(execGetPossessedItemSaveDataFromID); \
	DECLARE_FUNCTION(execGetUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetUnlockItemSaveDataByCategory); \
	DECLARE_FUNCTION(execSetAewCash); \
	DECLARE_FUNCTION(execSetAEWGold); \
	DECLARE_FUNCTION(execSetCareerModeWrestlerGUID); \
	DECLARE_FUNCTION(execSetConfirmedEULA_Version); \
	DECLARE_FUNCTION(execSetEpicAccountID); \
	DECLARE_FUNCTION(execUpdateChallengeProgressSaveData); \
	DECLARE_FUNCTION(execUpdateChallengeRecordSaveData); \
	DECLARE_FUNCTION(execUpdateChallengeRecordSaveDataList); \
	DECLARE_FUNCTION(execUpdateMatchScoreRanking); \
	DECLARE_FUNCTION(execUpdateMiniGameScoreRanking); \
	DECLARE_FUNCTION(execUpdateOnlyNormalChallengeRecordSaveData); \
	DECLARE_FUNCTION(execUpdatePossessedItemSaveData); \
	DECLARE_FUNCTION(execUpdateUnlockItemSaveData);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPossessedItemQuantity); \
	DECLARE_FUNCTION(execAllUpdatePossessedItemSaveData); \
	DECLARE_FUNCTION(execAllUpdateUnlockItemSaveData); \
	DECLARE_FUNCTION(execCreatePossessedItemSaveData); \
	DECLARE_FUNCTION(execCreateUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetAewCash); \
	DECLARE_FUNCTION(execGetAEWGold); \
	DECLARE_FUNCTION(execGetAllPossessedItemSaveData); \
	DECLARE_FUNCTION(execGetAllUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetCareerModeWrestlerGUID); \
	DECLARE_FUNCTION(execGetChallengeProgressSaveData); \
	DECLARE_FUNCTION(execGetChallengeRecordSaveData); \
	DECLARE_FUNCTION(execGetChallengeRecordSaveDataList); \
	DECLARE_FUNCTION(execGetConfirmedEULA_Version); \
	DECLARE_FUNCTION(execGetEpicAccountID); \
	DECLARE_FUNCTION(execGetMatchScoreRanking); \
	DECLARE_FUNCTION(execGetMiniGameScoreRanking); \
	DECLARE_FUNCTION(execGetOnlyNormalChallengeRecordSaveData); \
	DECLARE_FUNCTION(execGetPossessedItemSaveData); \
	DECLARE_FUNCTION(execGetPossessedItemSaveDataFromID); \
	DECLARE_FUNCTION(execGetUnlockItemSaveData); \
	DECLARE_FUNCTION(execGetUnlockItemSaveDataByCategory); \
	DECLARE_FUNCTION(execSetAewCash); \
	DECLARE_FUNCTION(execSetAEWGold); \
	DECLARE_FUNCTION(execSetCareerModeWrestlerGUID); \
	DECLARE_FUNCTION(execSetConfirmedEULA_Version); \
	DECLARE_FUNCTION(execSetEpicAccountID); \
	DECLARE_FUNCTION(execUpdateChallengeProgressSaveData); \
	DECLARE_FUNCTION(execUpdateChallengeRecordSaveData); \
	DECLARE_FUNCTION(execUpdateChallengeRecordSaveDataList); \
	DECLARE_FUNCTION(execUpdateMatchScoreRanking); \
	DECLARE_FUNCTION(execUpdateMiniGameScoreRanking); \
	DECLARE_FUNCTION(execUpdateOnlyNormalChallengeRecordSaveData); \
	DECLARE_FUNCTION(execUpdatePossessedItemSaveData); \
	DECLARE_FUNCTION(execUpdateUnlockItemSaveData);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataObject_PlayerData(); \
	friend struct Z_Construct_UClass_USaveDataObject_PlayerData_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_PlayerData, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_PlayerData)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataObject_PlayerData(); \
	friend struct Z_Construct_UClass_USaveDataObject_PlayerData_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_PlayerData, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_PlayerData)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataObject_PlayerData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataObject_PlayerData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_PlayerData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_PlayerData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_PlayerData(USaveDataObject_PlayerData&&); \
	NO_API USaveDataObject_PlayerData(const USaveDataObject_PlayerData&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_PlayerData(USaveDataObject_PlayerData&&); \
	NO_API USaveDataObject_PlayerData(const USaveDataObject_PlayerData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_PlayerData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_PlayerData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataObject_PlayerData)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_17_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveDataObject_PlayerData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_PlayerData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
