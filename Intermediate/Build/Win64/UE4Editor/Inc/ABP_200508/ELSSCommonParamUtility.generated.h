// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FYGS2SSPlayerData;
enum class ESSAbilityKind : uint8;
enum class ESSAbilityCalcMethod : uint8;
class UTexture2D;
struct FSSAbilityKindParam;
struct FSSAbilityParam;
enum class ESSDamageReason : uint8;
enum class ESSDamageReceiverState : uint8;
enum class ESSArmorType : uint8;
struct FSSAttackParam;
struct FSSAttentionAdjustParam;
struct FSSAttentionLevelParam;
struct FSSCharacterAdjust;
class UELSSCommonDatabase;
struct FSSGameRuleParam;
struct FSSHeatLevelParam;
enum class ESSWrestlerType : uint8;
enum class ESSMoveCommand : uint8;
struct FSSHeatMoveSet;
struct FSSHeatSkillDefaultSettings;
enum class ESSHeatSkillCategory : uint8;
struct FSSHeatSkillParam;
struct FSSItemParam;
struct FSSLoadoutPresetDefaultParam;
struct FSSMoveParam;
struct FSSPlayerRankParam;
enum class ESSPlayerRankRange : uint8;
struct FSSPlayerRankRangeParam;
struct FSSRoundAdjustParam;
struct FSSWeaponCommonParam;
enum class EWrestlerID_N : uint8;
struct FSSWrestlerParam;
struct FSSWrestlerTypeParam;
struct FSSWrestlerTypeResourceParam;
#ifdef ABP_200508_ELSSCommonParamUtility_generated_h
#error "ELSSCommonParamUtility.generated.h already included, missing '#pragma once' in ELSSCommonParamUtility.h"
#endif
#define ABP_200508_ELSSCommonParamUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcSSAttentionLevelFromPoint); \
	DECLARE_FUNCTION(execCalcSSHeatLevelFromExp); \
	DECLARE_FUNCTION(execCalcSSPlayerRankDisconnectPenalty); \
	DECLARE_FUNCTION(execCalcSSPlayerRankUpdate); \
	DECLARE_FUNCTION(execCalcSSStampedeLevelFromExp); \
	DECLARE_FUNCTION(execGetSSAbilityCalcMethod); \
	DECLARE_FUNCTION(execGetSSAbilityIconTexture); \
	DECLARE_FUNCTION(execGetSSAbilityKindParam); \
	DECLARE_FUNCTION(execGetSSAbilityParam); \
	DECLARE_FUNCTION(execGetSSArmorType); \
	DECLARE_FUNCTION(execGetSSAttackParam); \
	DECLARE_FUNCTION(execGetSSAttackParamListFromMoveId); \
	DECLARE_FUNCTION(execGetSSAttentionAdjustParam); \
	DECLARE_FUNCTION(execGetSSAttentionLevelParam); \
	DECLARE_FUNCTION(execGetSSAttentionLevelPoint); \
	DECLARE_FUNCTION(execGetSSCharacterAdjustParam); \
	DECLARE_FUNCTION(execGetSSCommonAttackParam); \
	DECLARE_FUNCTION(execGetSSCommonDatabase); \
	DECLARE_FUNCTION(execGetSSGameRuleParam); \
	DECLARE_FUNCTION(execGetSSHeatLevelExp); \
	DECLARE_FUNCTION(execGetSSHeatLevelParam); \
	DECLARE_FUNCTION(execGetSSHeatMoveSet); \
	DECLARE_FUNCTION(execGetSSHeatSkillDefaultSettings); \
	DECLARE_FUNCTION(execGetSSHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetSSHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetSSHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetSSHeatSkillParam); \
	DECLARE_FUNCTION(execGetSSItemIdAll); \
	DECLARE_FUNCTION(execGetSSItemParam); \
	DECLARE_FUNCTION(execGetSSLoadoutPresetDefaultParam); \
	DECLARE_FUNCTION(execGetSSMoveParam); \
	DECLARE_FUNCTION(execGetSSMoveParamById); \
	DECLARE_FUNCTION(execGetSSPlayerRankDisconnectPenalty); \
	DECLARE_FUNCTION(execGetSSPlayerRankIllegalPenalty); \
	DECLARE_FUNCTION(execGetSSPlayerRankMatchEntryCost); \
	DECLARE_FUNCTION(execGetSSPlayerRankParam); \
	DECLARE_FUNCTION(execGetSSPlayerRankParamAndNextInfo); \
	DECLARE_FUNCTION(execGetSSPlayerRankRangeParam); \
	DECLARE_FUNCTION(execGetSSPlayerRankRangeParamByRankPoint); \
	DECLARE_FUNCTION(execGetSSPlayerRankResultBasePoint); \
	DECLARE_FUNCTION(execGetSSRewardAbilityFromStampedeLevel); \
	DECLARE_FUNCTION(execGetSSRoundAdjustParam); \
	DECLARE_FUNCTION(execGetSSWeaponCommonParam); \
	DECLARE_FUNCTION(execGetSSWrestlerParam); \
	DECLARE_FUNCTION(execGetSSWrestlerTypeParam); \
	DECLARE_FUNCTION(execGetSSWrestlerTypeResourceParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcSSAttentionLevelFromPoint); \
	DECLARE_FUNCTION(execCalcSSHeatLevelFromExp); \
	DECLARE_FUNCTION(execCalcSSPlayerRankDisconnectPenalty); \
	DECLARE_FUNCTION(execCalcSSPlayerRankUpdate); \
	DECLARE_FUNCTION(execCalcSSStampedeLevelFromExp); \
	DECLARE_FUNCTION(execGetSSAbilityCalcMethod); \
	DECLARE_FUNCTION(execGetSSAbilityIconTexture); \
	DECLARE_FUNCTION(execGetSSAbilityKindParam); \
	DECLARE_FUNCTION(execGetSSAbilityParam); \
	DECLARE_FUNCTION(execGetSSArmorType); \
	DECLARE_FUNCTION(execGetSSAttackParam); \
	DECLARE_FUNCTION(execGetSSAttackParamListFromMoveId); \
	DECLARE_FUNCTION(execGetSSAttentionAdjustParam); \
	DECLARE_FUNCTION(execGetSSAttentionLevelParam); \
	DECLARE_FUNCTION(execGetSSAttentionLevelPoint); \
	DECLARE_FUNCTION(execGetSSCharacterAdjustParam); \
	DECLARE_FUNCTION(execGetSSCommonAttackParam); \
	DECLARE_FUNCTION(execGetSSCommonDatabase); \
	DECLARE_FUNCTION(execGetSSGameRuleParam); \
	DECLARE_FUNCTION(execGetSSHeatLevelExp); \
	DECLARE_FUNCTION(execGetSSHeatLevelParam); \
	DECLARE_FUNCTION(execGetSSHeatMoveSet); \
	DECLARE_FUNCTION(execGetSSHeatSkillDefaultSettings); \
	DECLARE_FUNCTION(execGetSSHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetSSHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetSSHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetSSHeatSkillParam); \
	DECLARE_FUNCTION(execGetSSItemIdAll); \
	DECLARE_FUNCTION(execGetSSItemParam); \
	DECLARE_FUNCTION(execGetSSLoadoutPresetDefaultParam); \
	DECLARE_FUNCTION(execGetSSMoveParam); \
	DECLARE_FUNCTION(execGetSSMoveParamById); \
	DECLARE_FUNCTION(execGetSSPlayerRankDisconnectPenalty); \
	DECLARE_FUNCTION(execGetSSPlayerRankIllegalPenalty); \
	DECLARE_FUNCTION(execGetSSPlayerRankMatchEntryCost); \
	DECLARE_FUNCTION(execGetSSPlayerRankParam); \
	DECLARE_FUNCTION(execGetSSPlayerRankParamAndNextInfo); \
	DECLARE_FUNCTION(execGetSSPlayerRankRangeParam); \
	DECLARE_FUNCTION(execGetSSPlayerRankRangeParamByRankPoint); \
	DECLARE_FUNCTION(execGetSSPlayerRankResultBasePoint); \
	DECLARE_FUNCTION(execGetSSRewardAbilityFromStampedeLevel); \
	DECLARE_FUNCTION(execGetSSRoundAdjustParam); \
	DECLARE_FUNCTION(execGetSSWeaponCommonParam); \
	DECLARE_FUNCTION(execGetSSWrestlerParam); \
	DECLARE_FUNCTION(execGetSSWrestlerTypeParam); \
	DECLARE_FUNCTION(execGetSSWrestlerTypeResourceParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSCommonParamUtility(); \
	friend struct Z_Construct_UClass_UELSSCommonParamUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSCommonParamUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCommonParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUELSSCommonParamUtility(); \
	friend struct Z_Construct_UClass_UELSSCommonParamUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSCommonParamUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCommonParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSCommonParamUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSCommonParamUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCommonParamUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCommonParamUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCommonParamUtility(UELSSCommonParamUtility&&); \
	NO_API UELSSCommonParamUtility(const UELSSCommonParamUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCommonParamUtility(UELSSCommonParamUtility&&); \
	NO_API UELSSCommonParamUtility(const UELSSCommonParamUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCommonParamUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCommonParamUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSCommonParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_42_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSCommonParamUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSCommonParamUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
