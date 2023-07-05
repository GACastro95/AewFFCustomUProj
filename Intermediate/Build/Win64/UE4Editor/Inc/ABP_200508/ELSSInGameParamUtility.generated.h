// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESSGuardBreakerType : uint8;
enum class ESSGuardReactionType : uint8;
enum class ESSResultGradeABC : uint8;
enum class ESSAbilityKind : uint8;
enum class ESSAbilityCalcMethod : uint8;
struct FSSAbilityKindParam;
struct FSSAbilityParam;
enum class ESSDamageReason : uint8;
enum class ESSDamageReceiverState : uint8;
enum class ESSArmorType : uint8;
struct FSSAttachParam;
struct FSSAttackParam;
struct FSSAttentionLevelParam;
struct FSSDamageReactionParam;
class AELSSDatabase;
struct FSSEffectParam;
struct FSSFallParam;
struct FSSGuardReactionParam;
struct FSSHeatLevelParam;
enum class ESSWrestlerType : uint8;
enum class ESSMoveCommand : uint8;
struct FSSHeatMoveSet;
struct FSSHeatSkillDefaultSettings;
class UTexture2D;
enum class ESSHeatSkillCategory : uint8;
struct FSSHeatSkillParam;
enum class ESSHitEffectType : uint8;
struct FSSHitEffectParam;
struct FSSItemParam;
class UDataTable;
enum class EWrestlerID_N : uint8;
struct FJukeBoxParam;
struct FSSMoveParam;
struct FSSShieldParam;
struct FSSSystemMotionParam;
class UAnimMontage;
struct FSSUseItemParam;
struct FSSVehicleParam;
struct FSSVictoryCutsceneParam;
struct FSSWeaponGunParam;
struct FSSWeaponMeleeParam;
struct FSSWeaponParam;
struct FSSWeaponThrowParam;
struct FSSWeaponTrapParam;
struct FSSWrestlerParam;
struct FSSWrestlerTypeParam;
struct FSSWrestlerTypeResourceParam;
#ifdef ABP_200508_ELSSInGameParamUtility_generated_h
#error "ELSSInGameParamUtility.generated.h already included, missing '#pragma once' in ELSSInGameParamUtility.h"
#endif
#define ABP_200508_ELSSInGameParamUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcAttentionLevelFromPoint); \
	DECLARE_FUNCTION(execCalcGuardReactionType); \
	DECLARE_FUNCTION(execCalcHeatLevelFromExp); \
	DECLARE_FUNCTION(execCalcResultAEWCash); \
	DECLARE_FUNCTION(execCalcResultGradeFromAttentionPoint); \
	DECLARE_FUNCTION(execCalcResultGradeFromFeverCount); \
	DECLARE_FUNCTION(execCalcResultGradeFromKillCount); \
	DECLARE_FUNCTION(execCalcResultStarGrade); \
	DECLARE_FUNCTION(execGetAbilityCalcMethod); \
	DECLARE_FUNCTION(execGetAbilityKindParam); \
	DECLARE_FUNCTION(execGetAbilityParam); \
	DECLARE_FUNCTION(execGetArmorType); \
	DECLARE_FUNCTION(execGetAttachParam); \
	DECLARE_FUNCTION(execGetAttackParam); \
	DECLARE_FUNCTION(execGetAttackParamListFromMoveId); \
	DECLARE_FUNCTION(execGetAttentionLevelParam); \
	DECLARE_FUNCTION(execGetAttentionLevelPoint); \
	DECLARE_FUNCTION(execGetCommonAttackParam); \
	DECLARE_FUNCTION(execGetDamageReactionParam); \
	DECLARE_FUNCTION(execGetDatabase); \
	DECLARE_FUNCTION(execGetEffectParam); \
	DECLARE_FUNCTION(execGetFallParam); \
	DECLARE_FUNCTION(execGetGuardReactionParam); \
	DECLARE_FUNCTION(execGetHeatLevelExp); \
	DECLARE_FUNCTION(execGetHeatLevelParam); \
	DECLARE_FUNCTION(execGetHeatMoveSet); \
	DECLARE_FUNCTION(execGetHeatSkillDefaultSettings); \
	DECLARE_FUNCTION(execGetHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillParam); \
	DECLARE_FUNCTION(execGetHitEffectParam); \
	DECLARE_FUNCTION(execGetItemIdAll); \
	DECLARE_FUNCTION(execGetItemParam); \
	DECLARE_FUNCTION(execGetJukeBoxParamFromWrestlerId); \
	DECLARE_FUNCTION(execGetMoveParam); \
	DECLARE_FUNCTION(execGetMoveParamById); \
	DECLARE_FUNCTION(execGetRewardAbilityFromStampedeLevel); \
	DECLARE_FUNCTION(execGetShieldParam); \
	DECLARE_FUNCTION(execGetSystemMotionParam); \
	DECLARE_FUNCTION(execGetTauntMontage); \
	DECLARE_FUNCTION(execGetUseItemParam); \
	DECLARE_FUNCTION(execGetVehicleParam); \
	DECLARE_FUNCTION(execGetVictoryCutsceneId); \
	DECLARE_FUNCTION(execGetVictoryCutsceneParam); \
	DECLARE_FUNCTION(execGetWeaponGunParam); \
	DECLARE_FUNCTION(execGetWeaponMeleeParam); \
	DECLARE_FUNCTION(execGetWeaponParam); \
	DECLARE_FUNCTION(execGetWeaponThrowParam); \
	DECLARE_FUNCTION(execGetWeaponTrapParam); \
	DECLARE_FUNCTION(execGetWrestlerParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeResourceParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcAttentionLevelFromPoint); \
	DECLARE_FUNCTION(execCalcGuardReactionType); \
	DECLARE_FUNCTION(execCalcHeatLevelFromExp); \
	DECLARE_FUNCTION(execCalcResultAEWCash); \
	DECLARE_FUNCTION(execCalcResultGradeFromAttentionPoint); \
	DECLARE_FUNCTION(execCalcResultGradeFromFeverCount); \
	DECLARE_FUNCTION(execCalcResultGradeFromKillCount); \
	DECLARE_FUNCTION(execCalcResultStarGrade); \
	DECLARE_FUNCTION(execGetAbilityCalcMethod); \
	DECLARE_FUNCTION(execGetAbilityKindParam); \
	DECLARE_FUNCTION(execGetAbilityParam); \
	DECLARE_FUNCTION(execGetArmorType); \
	DECLARE_FUNCTION(execGetAttachParam); \
	DECLARE_FUNCTION(execGetAttackParam); \
	DECLARE_FUNCTION(execGetAttackParamListFromMoveId); \
	DECLARE_FUNCTION(execGetAttentionLevelParam); \
	DECLARE_FUNCTION(execGetAttentionLevelPoint); \
	DECLARE_FUNCTION(execGetCommonAttackParam); \
	DECLARE_FUNCTION(execGetDamageReactionParam); \
	DECLARE_FUNCTION(execGetDatabase); \
	DECLARE_FUNCTION(execGetEffectParam); \
	DECLARE_FUNCTION(execGetFallParam); \
	DECLARE_FUNCTION(execGetGuardReactionParam); \
	DECLARE_FUNCTION(execGetHeatLevelExp); \
	DECLARE_FUNCTION(execGetHeatLevelParam); \
	DECLARE_FUNCTION(execGetHeatMoveSet); \
	DECLARE_FUNCTION(execGetHeatSkillDefaultSettings); \
	DECLARE_FUNCTION(execGetHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillParam); \
	DECLARE_FUNCTION(execGetHitEffectParam); \
	DECLARE_FUNCTION(execGetItemIdAll); \
	DECLARE_FUNCTION(execGetItemParam); \
	DECLARE_FUNCTION(execGetJukeBoxParamFromWrestlerId); \
	DECLARE_FUNCTION(execGetMoveParam); \
	DECLARE_FUNCTION(execGetMoveParamById); \
	DECLARE_FUNCTION(execGetRewardAbilityFromStampedeLevel); \
	DECLARE_FUNCTION(execGetShieldParam); \
	DECLARE_FUNCTION(execGetSystemMotionParam); \
	DECLARE_FUNCTION(execGetTauntMontage); \
	DECLARE_FUNCTION(execGetUseItemParam); \
	DECLARE_FUNCTION(execGetVehicleParam); \
	DECLARE_FUNCTION(execGetVictoryCutsceneId); \
	DECLARE_FUNCTION(execGetVictoryCutsceneParam); \
	DECLARE_FUNCTION(execGetWeaponGunParam); \
	DECLARE_FUNCTION(execGetWeaponMeleeParam); \
	DECLARE_FUNCTION(execGetWeaponParam); \
	DECLARE_FUNCTION(execGetWeaponThrowParam); \
	DECLARE_FUNCTION(execGetWeaponTrapParam); \
	DECLARE_FUNCTION(execGetWrestlerParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeResourceParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSInGameParamUtility(); \
	friend struct Z_Construct_UClass_UELSSInGameParamUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSInGameParamUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSInGameParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUELSSInGameParamUtility(); \
	friend struct Z_Construct_UClass_UELSSInGameParamUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSInGameParamUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSInGameParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSInGameParamUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSInGameParamUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSInGameParamUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSInGameParamUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSInGameParamUtility(UELSSInGameParamUtility&&); \
	NO_API UELSSInGameParamUtility(const UELSSInGameParamUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSInGameParamUtility(UELSSInGameParamUtility&&); \
	NO_API UELSSInGameParamUtility(const UELSSInGameParamUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSInGameParamUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSInGameParamUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSInGameParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_55_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSInGameParamUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameParamUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
