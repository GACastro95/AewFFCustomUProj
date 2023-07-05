// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBattlePassPersonalData;
struct FBattlePassRewardItemParam;
enum class EYGS2ErrorType : uint8;
class UYGS2RequestBase;
enum class EBattlePassRankMatchType : uint8;
class UDataTable;
enum class EUpdateBattlePassPointType : uint8;
#ifdef ABP_200508_ELBattlePassManager_generated_h
#error "ELBattlePassManager.generated.h already included, missing '#pragma once' in ELBattlePassManager.h"
#endif
#define ABP_200508_ELBattlePassManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckValidPersonalData); \
	DECLARE_FUNCTION(execCheckValidSeason); \
	DECLARE_FUNCTION(execEarnRewardsUpToSpecifiedLevel); \
	DECLARE_FUNCTION(execGetAccumulationBattlePassPoint); \
	DECLARE_FUNCTION(execGetAddPointBoostRate); \
	DECLARE_FUNCTION(execGetBattlePassLevel); \
	DECLARE_FUNCTION(execGetBattlePassMaxLevel); \
	DECLARE_FUNCTION(execGetCurrentBattlePassLevel); \
	DECLARE_FUNCTION(execGetEarnedRewardState); \
	DECLARE_FUNCTION(execGetNextBattePassLevelRate); \
	DECLARE_FUNCTION(execGetNextBattlePassLevelRateFromTotalPoint); \
	DECLARE_FUNCTION(execGetPersonalData); \
	DECLARE_FUNCTION(execGetRewardItemParamFromLevel); \
	DECLARE_FUNCTION(execGetRewardItemParamList); \
	DECLARE_FUNCTION(execIsPossessedPremiumPass); \
	DECLARE_FUNCTION(execIsRegistedUnlockableItem); \
	DECLARE_FUNCTION(execOnDownloadGoldCoin); \
	DECLARE_FUNCTION(execOnUnlockableItemPurchased); \
	DECLARE_FUNCTION(execOnUploadGoldCoin); \
	DECLARE_FUNCTION(execOnYGS2Response_PersonalData); \
	DECLARE_FUNCTION(execOnYGS2Response_RankMatchRecord); \
	DECLARE_FUNCTION(execRequestUpdateOnlineMatchResult); \
	DECLARE_FUNCTION(execSetAddPointBoostRate); \
	DECLARE_FUNCTION(execSetupBattlePassDataTable); \
	DECLARE_FUNCTION(execUpdateBattlePassPoint); \
	DECLARE_FUNCTION(execUpdateEarnedRewardState); \
	DECLARE_FUNCTION(execUpdatePossessedPremiumPass);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckValidPersonalData); \
	DECLARE_FUNCTION(execCheckValidSeason); \
	DECLARE_FUNCTION(execEarnRewardsUpToSpecifiedLevel); \
	DECLARE_FUNCTION(execGetAccumulationBattlePassPoint); \
	DECLARE_FUNCTION(execGetAddPointBoostRate); \
	DECLARE_FUNCTION(execGetBattlePassLevel); \
	DECLARE_FUNCTION(execGetBattlePassMaxLevel); \
	DECLARE_FUNCTION(execGetCurrentBattlePassLevel); \
	DECLARE_FUNCTION(execGetEarnedRewardState); \
	DECLARE_FUNCTION(execGetNextBattePassLevelRate); \
	DECLARE_FUNCTION(execGetNextBattlePassLevelRateFromTotalPoint); \
	DECLARE_FUNCTION(execGetPersonalData); \
	DECLARE_FUNCTION(execGetRewardItemParamFromLevel); \
	DECLARE_FUNCTION(execGetRewardItemParamList); \
	DECLARE_FUNCTION(execIsPossessedPremiumPass); \
	DECLARE_FUNCTION(execIsRegistedUnlockableItem); \
	DECLARE_FUNCTION(execOnDownloadGoldCoin); \
	DECLARE_FUNCTION(execOnUnlockableItemPurchased); \
	DECLARE_FUNCTION(execOnUploadGoldCoin); \
	DECLARE_FUNCTION(execOnYGS2Response_PersonalData); \
	DECLARE_FUNCTION(execOnYGS2Response_RankMatchRecord); \
	DECLARE_FUNCTION(execRequestUpdateOnlineMatchResult); \
	DECLARE_FUNCTION(execSetAddPointBoostRate); \
	DECLARE_FUNCTION(execSetupBattlePassDataTable); \
	DECLARE_FUNCTION(execUpdateBattlePassPoint); \
	DECLARE_FUNCTION(execUpdateEarnedRewardState); \
	DECLARE_FUNCTION(execUpdatePossessedPremiumPass);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELBattlePassManager(); \
	friend struct Z_Construct_UClass_UELBattlePassManager_Statics; \
public: \
	DECLARE_CLASS(UELBattlePassManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELBattlePassManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUELBattlePassManager(); \
	friend struct Z_Construct_UClass_UELBattlePassManager_Statics; \
public: \
	DECLARE_CLASS(UELBattlePassManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELBattlePassManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELBattlePassManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELBattlePassManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELBattlePassManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELBattlePassManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELBattlePassManager(UELBattlePassManager&&); \
	NO_API UELBattlePassManager(const UELBattlePassManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELBattlePassManager(UELBattlePassManager&&); \
	NO_API UELBattlePassManager(const UELBattlePassManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELBattlePassManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELBattlePassManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELBattlePassManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_RewardItemParamList() { return STRUCT_OFFSET(UELBattlePassManager, m_RewardItemParamList); } \
	FORCEINLINE static uint32 __PPO__m_LevelProgressParamList() { return STRUCT_OFFSET(UELBattlePassManager, m_LevelProgressParamList); } \
	FORCEINLINE static uint32 __PPO__m_RegistedUnlockableItemMap() { return STRUCT_OFFSET(UELBattlePassManager, m_RegistedUnlockableItemMap); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_20_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELBattlePassManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELBattlePassManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
