// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class UWorld;
class UELSSMasterDataRawData;
#ifdef ABP_200508_ELSSMasterData_generated_h
#error "ELSSMasterData.generated.h already included, missing '#pragma once' in ELSSMasterData.h"
#endif
#define ABP_200508_ELSSMasterData_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertDataTableToArray); \
	DECLARE_FUNCTION(execOnChangeLevel); \
	DECLARE_FUNCTION(execOnDestroy); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execSetRawData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertDataTableToArray); \
	DECLARE_FUNCTION(execOnChangeLevel); \
	DECLARE_FUNCTION(execOnDestroy); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execSetRawData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSMasterData(); \
	friend struct Z_Construct_UClass_UELSSMasterData_Statics; \
public: \
	DECLARE_CLASS(UELSSMasterData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSMasterData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUELSSMasterData(); \
	friend struct Z_Construct_UClass_UELSSMasterData_Statics; \
public: \
	DECLARE_CLASS(UELSSMasterData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSMasterData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSMasterData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSMasterData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSMasterData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSMasterData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSMasterData(UELSSMasterData&&); \
	NO_API UELSSMasterData(const UELSSMasterData&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSMasterData(UELSSMasterData&&); \
	NO_API UELSSMasterData(const UELSSMasterData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSMasterData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSMasterData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSMasterData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnableMasterData() { return STRUCT_OFFSET(UELSSMasterData, EnableMasterData); } \
	FORCEINLINE static uint32 __PPO__RawData() { return STRUCT_OFFSET(UELSSMasterData, RawData); } \
	FORCEINLINE static uint32 __PPO__WrestlerTypeParamArray() { return STRUCT_OFFSET(UELSSMasterData, WrestlerTypeParamArray); } \
	FORCEINLINE static uint32 __PPO__HeatLevelParamArray() { return STRUCT_OFFSET(UELSSMasterData, HeatLevelParamArray); } \
	FORCEINLINE static uint32 __PPO__CharacterAdjustArray() { return STRUCT_OFFSET(UELSSMasterData, CharacterAdjustArray); } \
	FORCEINLINE static uint32 __PPO__ArmorTypeParamArray() { return STRUCT_OFFSET(UELSSMasterData, ArmorTypeParamArray); } \
	FORCEINLINE static uint32 __PPO__AttackParamArray() { return STRUCT_OFFSET(UELSSMasterData, AttackParamArray); } \
	FORCEINLINE static uint32 __PPO__ItemParamArray() { return STRUCT_OFFSET(UELSSMasterData, ItemParamArray); } \
	FORCEINLINE static uint32 __PPO__WeaponCommonParamArray() { return STRUCT_OFFSET(UELSSMasterData, WeaponCommonParamArray); } \
	FORCEINLINE static uint32 __PPO__AbilityParamArray() { return STRUCT_OFFSET(UELSSMasterData, AbilityParamArray); } \
	FORCEINLINE static uint32 __PPO__RoundParamArray() { return STRUCT_OFFSET(UELSSMasterData, RoundParamArray); } \
	FORCEINLINE static uint32 __PPO__ItemBoxSpawnParamForRoundArray() { return STRUCT_OFFSET(UELSSMasterData, ItemBoxSpawnParamForRoundArray); } \
	FORCEINLINE static uint32 __PPO__RoundAdjustParamArray() { return STRUCT_OFFSET(UELSSMasterData, RoundAdjustParamArray); } \
	FORCEINLINE static uint32 __PPO__StormFinalParamArray() { return STRUCT_OFFSET(UELSSMasterData, StormFinalParamArray); } \
	FORCEINLINE static uint32 __PPO__AttentionAdjustParamArray() { return STRUCT_OFFSET(UELSSMasterData, AttentionAdjustParamArray); } \
	FORCEINLINE static uint32 __PPO__AttentionLevelParamArray() { return STRUCT_OFFSET(UELSSMasterData, AttentionLevelParamArray); } \
	FORCEINLINE static uint32 __PPO__AttentionScoreParamArray() { return STRUCT_OFFSET(UELSSMasterData, AttentionScoreParamArray); } \
	FORCEINLINE static uint32 __PPO__LotSpawnNumParamArray() { return STRUCT_OFFSET(UELSSMasterData, LotSpawnNumParamArray); } \
	FORCEINLINE static uint32 __PPO__LotItemCategoryParamArray() { return STRUCT_OFFSET(UELSSMasterData, LotItemCategoryParamArray); } \
	FORCEINLINE static uint32 __PPO__LotItemParamArray() { return STRUCT_OFFSET(UELSSMasterData, LotItemParamArray); } \
	FORCEINLINE static uint32 __PPO__LotWeaponParamArray() { return STRUCT_OFFSET(UELSSMasterData, LotWeaponParamArray); } \
	FORCEINLINE static uint32 __PPO__HeatSkillParamArray() { return STRUCT_OFFSET(UELSSMasterData, HeatSkillParamArray); } \
	FORCEINLINE static uint32 __PPO__HeatSkillTreeParamArray() { return STRUCT_OFFSET(UELSSMasterData, HeatSkillTreeParamArray); } \
	FORCEINLINE static uint32 __PPO__HeatMoveSetArray() { return STRUCT_OFFSET(UELSSMasterData, HeatMoveSetArray); } \
	FORCEINLINE static uint32 __PPO__PlayerRankRangeParamArray() { return STRUCT_OFFSET(UELSSMasterData, PlayerRankRangeParamArray); } \
	FORCEINLINE static uint32 __PPO__GeneralParamArray() { return STRUCT_OFFSET(UELSSMasterData, GeneralParamArray); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_34_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSMasterData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
