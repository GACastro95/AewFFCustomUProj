// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECareerPostCommandEventType : uint8;
enum class ECareerDiningType : uint8;
enum class ECareerScenarioMatchTiming : uint8;
class UDataTable;
#ifdef ABP_200508_ELCareerBalanceAdjustParam_generated_h
#error "ELCareerBalanceAdjustParam.generated.h already included, missing '#pragma once' in ELCareerBalanceAdjustParam.h"
#endif
#define ABP_200508_ELCareerBalanceAdjustParam_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKey_Dining_Reward_Description); \
	DECLARE_FUNCTION(execGetRate_Hospital_Reward_EnagyHealPercent); \
	DECLARE_FUNCTION(execGetRate_Hospital_Reward_NeedCareerMoney); \
	DECLARE_FUNCTION(execGetRate_Hospital_Reward_SuccessRate); \
	DECLARE_FUNCTION(execGetRate_WorkOut_Reward_SuccessRate); \
	DECLARE_FUNCTION(execGetType_Dining_Reward_DiningType); \
	DECLARE_FUNCTION(execGetValue_Dining_Reward_EnagyHealValue); \
	DECLARE_FUNCTION(execGetValue_Records_Scenario_PercentValue); \
	DECLARE_FUNCTION(execGetValue_Records_ScoreStar_HalfStarBool); \
	DECLARE_FUNCTION(execGetValue_Records_ScoreStar_StarValue); \
	DECLARE_FUNCTION(execGetValue_WorkOut_Reward_ChangeEnagy); \
	DECLARE_FUNCTION(execGetValue_WorkOut_Reward_ChangeSkillPoint); \
	DECLARE_FUNCTION(execSetDataTable_Records_BestScoreStar); \
	DECLARE_FUNCTION(execSetDataTable_Records_ScenarioPercent); \
	DECLARE_FUNCTION(execSetDataTable_Reward_Dining); \
	DECLARE_FUNCTION(execSetDataTable_Reward_Energy); \
	DECLARE_FUNCTION(execSetDataTable_Reward_Hospital); \
	DECLARE_FUNCTION(execSetDataTable_Reward_Motivation); \
	DECLARE_FUNCTION(execSetDataTable_Reward_ScoreBonus_CareerMoney); \
	DECLARE_FUNCTION(execSetDataTable_Reward_ScoreBonus_SkillPoint); \
	DECLARE_FUNCTION(execSetDataTable_Reward_WinBonus_CareerMoney); \
	DECLARE_FUNCTION(execSetDataTable_Reward_WinBonus_SkillPoint); \
	DECLARE_FUNCTION(execSetDataTable_WorkOut_Reward_Energy); \
	DECLARE_FUNCTION(execSetDataTable_WorkOut_Reward_SkillPoint); \
	DECLARE_FUNCTION(execSetDataTable_WorkOut_Reward_SuccessRate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKey_Dining_Reward_Description); \
	DECLARE_FUNCTION(execGetRate_Hospital_Reward_EnagyHealPercent); \
	DECLARE_FUNCTION(execGetRate_Hospital_Reward_NeedCareerMoney); \
	DECLARE_FUNCTION(execGetRate_Hospital_Reward_SuccessRate); \
	DECLARE_FUNCTION(execGetRate_WorkOut_Reward_SuccessRate); \
	DECLARE_FUNCTION(execGetType_Dining_Reward_DiningType); \
	DECLARE_FUNCTION(execGetValue_Dining_Reward_EnagyHealValue); \
	DECLARE_FUNCTION(execGetValue_Records_Scenario_PercentValue); \
	DECLARE_FUNCTION(execGetValue_Records_ScoreStar_HalfStarBool); \
	DECLARE_FUNCTION(execGetValue_Records_ScoreStar_StarValue); \
	DECLARE_FUNCTION(execGetValue_WorkOut_Reward_ChangeEnagy); \
	DECLARE_FUNCTION(execGetValue_WorkOut_Reward_ChangeSkillPoint); \
	DECLARE_FUNCTION(execSetDataTable_Records_BestScoreStar); \
	DECLARE_FUNCTION(execSetDataTable_Records_ScenarioPercent); \
	DECLARE_FUNCTION(execSetDataTable_Reward_Dining); \
	DECLARE_FUNCTION(execSetDataTable_Reward_Energy); \
	DECLARE_FUNCTION(execSetDataTable_Reward_Hospital); \
	DECLARE_FUNCTION(execSetDataTable_Reward_Motivation); \
	DECLARE_FUNCTION(execSetDataTable_Reward_ScoreBonus_CareerMoney); \
	DECLARE_FUNCTION(execSetDataTable_Reward_ScoreBonus_SkillPoint); \
	DECLARE_FUNCTION(execSetDataTable_Reward_WinBonus_CareerMoney); \
	DECLARE_FUNCTION(execSetDataTable_Reward_WinBonus_SkillPoint); \
	DECLARE_FUNCTION(execSetDataTable_WorkOut_Reward_Energy); \
	DECLARE_FUNCTION(execSetDataTable_WorkOut_Reward_SkillPoint); \
	DECLARE_FUNCTION(execSetDataTable_WorkOut_Reward_SuccessRate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerBalanceAdjustParam(); \
	friend struct Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics; \
public: \
	DECLARE_CLASS(AELCareerBalanceAdjustParam, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerBalanceAdjustParam)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerBalanceAdjustParam(); \
	friend struct Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics; \
public: \
	DECLARE_CLASS(AELCareerBalanceAdjustParam, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerBalanceAdjustParam)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerBalanceAdjustParam(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerBalanceAdjustParam) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerBalanceAdjustParam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerBalanceAdjustParam); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerBalanceAdjustParam(AELCareerBalanceAdjustParam&&); \
	NO_API AELCareerBalanceAdjustParam(const AELCareerBalanceAdjustParam&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerBalanceAdjustParam(AELCareerBalanceAdjustParam&&); \
	NO_API AELCareerBalanceAdjustParam(const AELCareerBalanceAdjustParam&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerBalanceAdjustParam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerBalanceAdjustParam); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerBalanceAdjustParam)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerBalanceAdjustParam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerBalanceAdjustParam_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
