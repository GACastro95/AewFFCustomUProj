// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSAbilityKind : uint8;
enum class ESSAbilityCalcMethod : uint8;
class UTexture2D;
struct FSSAbilityKindParam;
struct FSSAbilityParam;
enum class ESSDamageReason : uint8;
enum class ESSDamageReceiverState : uint8;
enum class ESSArmorType : uint8;
struct FSSAttackParam;
struct FSSAttentionLevelParam;
struct FSSHeatLevelParam;
enum class ESSWrestlerType : uint8;
enum class ESSMoveCommand : uint8;
struct FSSHeatMoveSet;
struct FSSHeatSkillDefaultSettings;
enum class ESSHeatSkillCategory : uint8;
struct FSSHeatSkillParam;
struct FSSItemParam;
struct FSSMoveParam;
enum class ESSAbilitySortType : uint8;
struct FSSWeaponCommonParam;
enum class EWrestlerID_N : uint8;
struct FSSWrestlerParam;
struct FSSWrestlerTypeParam;
struct FSSWrestlerTypeResourceParam;
#ifdef ABP_200508_ELSSCommonDatabase_generated_h
#error "ELSSCommonDatabase.generated.h already included, missing '#pragma once' in ELSSCommonDatabase.h"
#endif
#define ABP_200508_ELSSCommonDatabase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcAttentionLevelFromPoint); \
	DECLARE_FUNCTION(execCalcHeatLevelFromExp); \
	DECLARE_FUNCTION(execConvertDataTableToArray); \
	DECLARE_FUNCTION(execGetAbilityCalcMethod); \
	DECLARE_FUNCTION(execGetAbilityIconTexture); \
	DECLARE_FUNCTION(execGetAbilityKindParam); \
	DECLARE_FUNCTION(execGetAbilityParam); \
	DECLARE_FUNCTION(execGetArmorType); \
	DECLARE_FUNCTION(execGetAttackParam); \
	DECLARE_FUNCTION(execGetAttackParamListFromMoveId); \
	DECLARE_FUNCTION(execGetAttentionLevelParam); \
	DECLARE_FUNCTION(execGetAttentionLevelPoint); \
	DECLARE_FUNCTION(execGetCommonAttackParam); \
	DECLARE_FUNCTION(execGetHeatLevelExp); \
	DECLARE_FUNCTION(execGetHeatLevelParam); \
	DECLARE_FUNCTION(execGetHeatMoveSet); \
	DECLARE_FUNCTION(execGetHeatSkillDefaultSettings); \
	DECLARE_FUNCTION(execGetHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillParam); \
	DECLARE_FUNCTION(execGetItemParam); \
	DECLARE_FUNCTION(execGetMoveParam); \
	DECLARE_FUNCTION(execGetMoveParamById); \
	DECLARE_FUNCTION(execGetRewardAbilityFromStampedeLevel); \
	DECLARE_FUNCTION(execGetSortedAbilityParamArray); \
	DECLARE_FUNCTION(execGetWeaponCommonParam); \
	DECLARE_FUNCTION(execGetWrestlerParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeResourceParam); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execMakeSortedAbilityParamArray);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcAttentionLevelFromPoint); \
	DECLARE_FUNCTION(execCalcHeatLevelFromExp); \
	DECLARE_FUNCTION(execConvertDataTableToArray); \
	DECLARE_FUNCTION(execGetAbilityCalcMethod); \
	DECLARE_FUNCTION(execGetAbilityIconTexture); \
	DECLARE_FUNCTION(execGetAbilityKindParam); \
	DECLARE_FUNCTION(execGetAbilityParam); \
	DECLARE_FUNCTION(execGetArmorType); \
	DECLARE_FUNCTION(execGetAttackParam); \
	DECLARE_FUNCTION(execGetAttackParamListFromMoveId); \
	DECLARE_FUNCTION(execGetAttentionLevelParam); \
	DECLARE_FUNCTION(execGetAttentionLevelPoint); \
	DECLARE_FUNCTION(execGetCommonAttackParam); \
	DECLARE_FUNCTION(execGetHeatLevelExp); \
	DECLARE_FUNCTION(execGetHeatLevelParam); \
	DECLARE_FUNCTION(execGetHeatMoveSet); \
	DECLARE_FUNCTION(execGetHeatSkillDefaultSettings); \
	DECLARE_FUNCTION(execGetHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillParam); \
	DECLARE_FUNCTION(execGetItemParam); \
	DECLARE_FUNCTION(execGetMoveParam); \
	DECLARE_FUNCTION(execGetMoveParamById); \
	DECLARE_FUNCTION(execGetRewardAbilityFromStampedeLevel); \
	DECLARE_FUNCTION(execGetSortedAbilityParamArray); \
	DECLARE_FUNCTION(execGetWeaponCommonParam); \
	DECLARE_FUNCTION(execGetWrestlerParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeResourceParam); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execMakeSortedAbilityParamArray);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSCommonDatabase(); \
	friend struct Z_Construct_UClass_UELSSCommonDatabase_Statics; \
public: \
	DECLARE_CLASS(UELSSCommonDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCommonDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUELSSCommonDatabase(); \
	friend struct Z_Construct_UClass_UELSSCommonDatabase_Statics; \
public: \
	DECLARE_CLASS(UELSSCommonDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCommonDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSCommonDatabase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSCommonDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCommonDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCommonDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCommonDatabase(UELSSCommonDatabase&&); \
	NO_API UELSSCommonDatabase(const UELSSCommonDatabase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCommonDatabase(UELSSCommonDatabase&&); \
	NO_API UELSSCommonDatabase(const UELSSCommonDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCommonDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCommonDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSCommonDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MasterData() { return STRUCT_OFFSET(UELSSCommonDatabase, MasterData); } \
	FORCEINLINE static uint32 __PPO__AbilityResourceParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, AbilityResourceParamTable); } \
	FORCEINLINE static uint32 __PPO__AbilityResourceParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, AbilityResourceParamArray); } \
	FORCEINLINE static uint32 __PPO__SortedAbilityParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, SortedAbilityParamArray); } \
	FORCEINLINE static uint32 __PPO__AbilityKindParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, AbilityKindParamTable); } \
	FORCEINLINE static uint32 __PPO__AbilityKindParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, AbilityKindParamArray); } \
	FORCEINLINE static uint32 __PPO__WrestlerParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, WrestlerParamTable); } \
	FORCEINLINE static uint32 __PPO__WrestlerTypeResourceParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, WrestlerTypeResourceParamTable); } \
	FORCEINLINE static uint32 __PPO__HeatSkillDefaultSettingsTable() { return STRUCT_OFFSET(UELSSCommonDatabase, HeatSkillDefaultSettingsTable); } \
	FORCEINLINE static uint32 __PPO__HeatSkillDefaultSettingsArray() { return STRUCT_OFFSET(UELSSCommonDatabase, HeatSkillDefaultSettingsArray); } \
	FORCEINLINE static uint32 __PPO__HeatSkillIconTable() { return STRUCT_OFFSET(UELSSCommonDatabase, HeatSkillIconTable); } \
	FORCEINLINE static uint32 __PPO__HeatSkillIconArray() { return STRUCT_OFFSET(UELSSCommonDatabase, HeatSkillIconArray); } \
	FORCEINLINE static uint32 __PPO__CommonAttackParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, CommonAttackParamTable); } \
	FORCEINLINE static uint32 __PPO__MoveParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, MoveParamTable); } \
	FORCEINLINE static uint32 __PPO__StampedeRankParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, StampedeRankParamTable); } \
	FORCEINLINE static uint32 __PPO__StampedeRankParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, StampedeRankParamArray); } \
	FORCEINLINE static uint32 __PPO__PlayerRankParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, PlayerRankParamTable); } \
	FORCEINLINE static uint32 __PPO__PlayerRankParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, PlayerRankParamArray); } \
	FORCEINLINE static uint32 __PPO__PlayerRankRangeParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, PlayerRankRangeParamTable); } \
	FORCEINLINE static uint32 __PPO__PlayerRankRangeParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, PlayerRankRangeParamArray); } \
	FORCEINLINE static uint32 __PPO__LoadoutPresetDefaultParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, LoadoutPresetDefaultParamTable); } \
	FORCEINLINE static uint32 __PPO__LoadoutPresetDefaultParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, LoadoutPresetDefaultParamArray); } \
	FORCEINLINE static uint32 __PPO__GameRuleParamTable() { return STRUCT_OFFSET(UELSSCommonDatabase, GameRuleParamTable); } \
	FORCEINLINE static uint32 __PPO__GameRuleParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, GameRuleParamArray); } \
	FORCEINLINE static uint32 __PPO__StateInfoTable() { return STRUCT_OFFSET(UELSSCommonDatabase, StateInfoTable); } \
	FORCEINLINE static uint32 __PPO__StateInfoParamArray() { return STRUCT_OFFSET(UELSSCommonDatabase, StateInfoParamArray); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_42_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSCommonDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
