// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EChallengeMatchRuleType : uint8;
enum class EWrestlerID_N : uint8;
enum class EChallengeCpuDifficultyType : uint8;
enum class EELBelt : uint8;
#ifdef ABP_200508_ELChallengeUtilityFunction_generated_h
#error "ELChallengeUtilityFunction.generated.h already included, missing '#pragma once' in ELChallengeUtilityFunction.h"
#endif
#define ABP_200508_ELChallengeUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddBecameFinisher); \
	DECLARE_FUNCTION(execAddBlowOpponentWhoCamebackFromRope); \
	DECLARE_FUNCTION(execAddCompletedTheTaunt); \
	DECLARE_FUNCTION(execAddCrearedCareerMode); \
	DECLARE_FUNCTION(execAddCreatedCustomArea); \
	DECLARE_FUNCTION(execAddCreatedCustomWrestler); \
	DECLARE_FUNCTION(execAddDamageRankMatch); \
	DECLARE_FUNCTION(execAddDefeatedCpuWithCountout); \
	DECLARE_FUNCTION(execAddDefeatedCpuWithPinfall); \
	DECLARE_FUNCTION(execAddDefeatedCpuWithSubmission); \
	DECLARE_FUNCTION(execAddDistanceRankMatch); \
	DECLARE_FUNCTION(execAddEditedBadgeItem); \
	DECLARE_FUNCTION(execAddEditedTeam); \
	DECLARE_FUNCTION(execAddExhibitionMatchCount); \
	DECLARE_FUNCTION(execAddExhibitionMatchCountWithCpu); \
	DECLARE_FUNCTION(execAddForcedMovedToTitleBelt); \
	DECLARE_FUNCTION(execAddFrendTagWin); \
	DECLARE_FUNCTION(execAddGrabToTheOpponentWhoWentDown); \
	DECLARE_FUNCTION(execAddHitBehindStrongGrab); \
	DECLARE_FUNCTION(execAddHitBehindWeakGrab); \
	DECLARE_FUNCTION(execAddHitDashBlow); \
	DECLARE_FUNCTION(execAddHitDivingBlow); \
	DECLARE_FUNCTION(execAddHitFrontStrongGrab); \
	DECLARE_FUNCTION(execAddHitFrontWeakGrab); \
	DECLARE_FUNCTION(execAddHitStrongBlow); \
	DECLARE_FUNCTION(execAddHitWeakBlow); \
	DECLARE_FUNCTION(execAddHitWeaponAttack); \
	DECLARE_FUNCTION(execAddMatchResultRankRankMatch); \
	DECLARE_FUNCTION(execAddMatchResultScore); \
	DECLARE_FUNCTION(execAddModifiedCustomWrestlerSkill); \
	DECLARE_FUNCTION(execAddModifiedEntrance); \
	DECLARE_FUNCTION(execAddModifiedWrester); \
	DECLARE_FUNCTION(execAddPlayedCareerMode); \
	DECLARE_FUNCTION(execAddPlayedCrate); \
	DECLARE_FUNCTION(execAddPlayedMiniGame); \
	DECLARE_FUNCTION(execAddPlayedOnlineCasualMatch); \
	DECLARE_FUNCTION(execAddPlayedOnlineRankMatch); \
	DECLARE_FUNCTION(execAddPlayStadiumStampedeModeCount); \
	DECLARE_FUNCTION(execAddPossessedBadgeItem); \
	DECLARE_FUNCTION(execAddPurchasedItem); \
	DECLARE_FUNCTION(execAddSSFarWeaponAttackDamageCount); \
	DECLARE_FUNCTION(execAddSSFinisherSuccessCount); \
	DECLARE_FUNCTION(execAddSSJumpAttackHitCount); \
	DECLARE_FUNCTION(execAddSSNearWeaponAttackDamageCount); \
	DECLARE_FUNCTION(execAddSSStrongStrikeTechniqueHitCount); \
	DECLARE_FUNCTION(execAddSSThrowingWeaponAttackDamageCount); \
	DECLARE_FUNCTION(execAddSSTotalAbilityUseCount); \
	DECLARE_FUNCTION(execAddSSTotalRevivalCount); \
	DECLARE_FUNCTION(execAddSSTotalSlotMachinePlayCount); \
	DECLARE_FUNCTION(execAddSSTotalVendingMachineBuyCount); \
	DECLARE_FUNCTION(execAddSSTotalWrestlerKillCount); \
	DECLARE_FUNCTION(execAddSSVictoryRoyalWrestlerTypeToBalance); \
	DECLARE_FUNCTION(execAddSSVictoryRoyalWrestlerTypeToHighFly); \
	DECLARE_FUNCTION(execAddSSVictoryRoyalWrestlerTypeToPower); \
	DECLARE_FUNCTION(execAddSSWeakStrikeTechniqueHitCount); \
	DECLARE_FUNCTION(execAddStadiumStampedeModeVictoryRoyalCount); \
	DECLARE_FUNCTION(execAddThrewOpponentWhoCamebackFromRope); \
	DECLARE_FUNCTION(execAddUnlockedWrestler); \
	DECLARE_FUNCTION(execAddWatchingGamesCount); \
	DECLARE_FUNCTION(execAddWinTheChampionTitle); \
	DECLARE_FUNCTION(execCreatePlayerData); \
	DECLARE_FUNCTION(execDisposeSaveData); \
	DECLARE_FUNCTION(execUpdateMatchResultRank); \
	DECLARE_FUNCTION(execUpdateMiniGameHighScore); \
	DECLARE_FUNCTION(execUpdateOnlineRank); \
	DECLARE_FUNCTION(execUpdateOnlineRanking); \
	DECLARE_FUNCTION(execUpdateSSAbilityUseCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSEpicWeaponHitInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSExpItemInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSFeverCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSFinisherSuccessCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSHighestReachPlayerRank); \
	DECLARE_FUNCTION(execUpdateSSSituationMoveCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSSlotMachinePlayCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSTreasureBoxInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSVendingMachineBuyCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSWrestlerKillCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateTwoPlatoonCntRankMatch);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddBecameFinisher); \
	DECLARE_FUNCTION(execAddBlowOpponentWhoCamebackFromRope); \
	DECLARE_FUNCTION(execAddCompletedTheTaunt); \
	DECLARE_FUNCTION(execAddCrearedCareerMode); \
	DECLARE_FUNCTION(execAddCreatedCustomArea); \
	DECLARE_FUNCTION(execAddCreatedCustomWrestler); \
	DECLARE_FUNCTION(execAddDamageRankMatch); \
	DECLARE_FUNCTION(execAddDefeatedCpuWithCountout); \
	DECLARE_FUNCTION(execAddDefeatedCpuWithPinfall); \
	DECLARE_FUNCTION(execAddDefeatedCpuWithSubmission); \
	DECLARE_FUNCTION(execAddDistanceRankMatch); \
	DECLARE_FUNCTION(execAddEditedBadgeItem); \
	DECLARE_FUNCTION(execAddEditedTeam); \
	DECLARE_FUNCTION(execAddExhibitionMatchCount); \
	DECLARE_FUNCTION(execAddExhibitionMatchCountWithCpu); \
	DECLARE_FUNCTION(execAddForcedMovedToTitleBelt); \
	DECLARE_FUNCTION(execAddFrendTagWin); \
	DECLARE_FUNCTION(execAddGrabToTheOpponentWhoWentDown); \
	DECLARE_FUNCTION(execAddHitBehindStrongGrab); \
	DECLARE_FUNCTION(execAddHitBehindWeakGrab); \
	DECLARE_FUNCTION(execAddHitDashBlow); \
	DECLARE_FUNCTION(execAddHitDivingBlow); \
	DECLARE_FUNCTION(execAddHitFrontStrongGrab); \
	DECLARE_FUNCTION(execAddHitFrontWeakGrab); \
	DECLARE_FUNCTION(execAddHitStrongBlow); \
	DECLARE_FUNCTION(execAddHitWeakBlow); \
	DECLARE_FUNCTION(execAddHitWeaponAttack); \
	DECLARE_FUNCTION(execAddMatchResultRankRankMatch); \
	DECLARE_FUNCTION(execAddMatchResultScore); \
	DECLARE_FUNCTION(execAddModifiedCustomWrestlerSkill); \
	DECLARE_FUNCTION(execAddModifiedEntrance); \
	DECLARE_FUNCTION(execAddModifiedWrester); \
	DECLARE_FUNCTION(execAddPlayedCareerMode); \
	DECLARE_FUNCTION(execAddPlayedCrate); \
	DECLARE_FUNCTION(execAddPlayedMiniGame); \
	DECLARE_FUNCTION(execAddPlayedOnlineCasualMatch); \
	DECLARE_FUNCTION(execAddPlayedOnlineRankMatch); \
	DECLARE_FUNCTION(execAddPlayStadiumStampedeModeCount); \
	DECLARE_FUNCTION(execAddPossessedBadgeItem); \
	DECLARE_FUNCTION(execAddPurchasedItem); \
	DECLARE_FUNCTION(execAddSSFarWeaponAttackDamageCount); \
	DECLARE_FUNCTION(execAddSSFinisherSuccessCount); \
	DECLARE_FUNCTION(execAddSSJumpAttackHitCount); \
	DECLARE_FUNCTION(execAddSSNearWeaponAttackDamageCount); \
	DECLARE_FUNCTION(execAddSSStrongStrikeTechniqueHitCount); \
	DECLARE_FUNCTION(execAddSSThrowingWeaponAttackDamageCount); \
	DECLARE_FUNCTION(execAddSSTotalAbilityUseCount); \
	DECLARE_FUNCTION(execAddSSTotalRevivalCount); \
	DECLARE_FUNCTION(execAddSSTotalSlotMachinePlayCount); \
	DECLARE_FUNCTION(execAddSSTotalVendingMachineBuyCount); \
	DECLARE_FUNCTION(execAddSSTotalWrestlerKillCount); \
	DECLARE_FUNCTION(execAddSSVictoryRoyalWrestlerTypeToBalance); \
	DECLARE_FUNCTION(execAddSSVictoryRoyalWrestlerTypeToHighFly); \
	DECLARE_FUNCTION(execAddSSVictoryRoyalWrestlerTypeToPower); \
	DECLARE_FUNCTION(execAddSSWeakStrikeTechniqueHitCount); \
	DECLARE_FUNCTION(execAddStadiumStampedeModeVictoryRoyalCount); \
	DECLARE_FUNCTION(execAddThrewOpponentWhoCamebackFromRope); \
	DECLARE_FUNCTION(execAddUnlockedWrestler); \
	DECLARE_FUNCTION(execAddWatchingGamesCount); \
	DECLARE_FUNCTION(execAddWinTheChampionTitle); \
	DECLARE_FUNCTION(execCreatePlayerData); \
	DECLARE_FUNCTION(execDisposeSaveData); \
	DECLARE_FUNCTION(execUpdateMatchResultRank); \
	DECLARE_FUNCTION(execUpdateMiniGameHighScore); \
	DECLARE_FUNCTION(execUpdateOnlineRank); \
	DECLARE_FUNCTION(execUpdateOnlineRanking); \
	DECLARE_FUNCTION(execUpdateSSAbilityUseCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSEpicWeaponHitInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSExpItemInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSFeverCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSFinisherSuccessCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSHighestReachPlayerRank); \
	DECLARE_FUNCTION(execUpdateSSSituationMoveCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSSlotMachinePlayCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSTreasureBoxInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSVendingMachineBuyCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateSSWrestlerKillCountInOneMatch); \
	DECLARE_FUNCTION(execUpdateTwoPlatoonCntRankMatch);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELChallengeUtilityFunction(); \
	friend struct Z_Construct_UClass_UELChallengeUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELChallengeUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELChallengeUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELChallengeUtilityFunction(); \
	friend struct Z_Construct_UClass_UELChallengeUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELChallengeUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELChallengeUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELChallengeUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELChallengeUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELChallengeUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELChallengeUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELChallengeUtilityFunction(UELChallengeUtilityFunction&&); \
	NO_API UELChallengeUtilityFunction(const UELChallengeUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELChallengeUtilityFunction(UELChallengeUtilityFunction&&); \
	NO_API UELChallengeUtilityFunction(const UELChallengeUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELChallengeUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELChallengeUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELChallengeUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELChallengeUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
