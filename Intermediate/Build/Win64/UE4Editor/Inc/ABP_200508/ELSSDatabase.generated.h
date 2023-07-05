// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSGuardBreakerType : uint8;
enum class ESSGuardReactionType : uint8;
enum class ESSResultGradeABC : uint8;
struct FSSAIPlayerParam;
struct FSSAIPlayerStampedeLevelParam;
struct FSSAttachParam;
struct FSSDamageReactionParam;
struct FSSEffectParam;
struct FSSFallParam;
struct FSSGuardReactionParam;
enum class ESSHitEffectType : uint8;
struct FSSHitEffectParam;
struct FSSItemResourceParam;
struct FSSShieldParam;
struct FSSSystemMotionParam;
struct FSSUseItemParam;
struct FSSVehicleParam;
struct FSSVictoryCutsceneParam;
struct FSSWeaponGunParam;
struct FSSWeaponMeleeParam;
struct FSSWeaponParam;
struct FSSWeaponThrowParam;
struct FSSWeaponTrapParam;
#ifdef ABP_200508_ELSSDatabase_generated_h
#error "ELSSDatabase.generated.h already included, missing '#pragma once' in ELSSDatabase.h"
#endif
#define ABP_200508_ELSSDatabase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcGuardReactionType); \
	DECLARE_FUNCTION(execCalcResultAEWCash); \
	DECLARE_FUNCTION(execCalcResultGradeFromAttentionPoint); \
	DECLARE_FUNCTION(execCalcResultGradeFromFeverCount); \
	DECLARE_FUNCTION(execCalcResultGradeFromKillCount); \
	DECLARE_FUNCTION(execCalcResultStarGrade); \
	DECLARE_FUNCTION(execGetAIPlayerParam); \
	DECLARE_FUNCTION(execGetAIPlayerStampedeLevelParam); \
	DECLARE_FUNCTION(execGetAttachParam); \
	DECLARE_FUNCTION(execGetDamageReactionParam); \
	DECLARE_FUNCTION(execGetEffectParam); \
	DECLARE_FUNCTION(execGetFallParam); \
	DECLARE_FUNCTION(execGetGuardReactionParam); \
	DECLARE_FUNCTION(execGetHitEffectParam); \
	DECLARE_FUNCTION(execGetItemResourceParam); \
	DECLARE_FUNCTION(execGetShieldParam); \
	DECLARE_FUNCTION(execGetSystemMotionParam); \
	DECLARE_FUNCTION(execGetUseItemParam); \
	DECLARE_FUNCTION(execGetVehicleParam); \
	DECLARE_FUNCTION(execGetVictoryCutsceneParam); \
	DECLARE_FUNCTION(execGetWeaponGunParam); \
	DECLARE_FUNCTION(execGetWeaponMeleeParam); \
	DECLARE_FUNCTION(execGetWeaponParam); \
	DECLARE_FUNCTION(execGetWeaponThrowParam); \
	DECLARE_FUNCTION(execGetWeaponTrapParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcGuardReactionType); \
	DECLARE_FUNCTION(execCalcResultAEWCash); \
	DECLARE_FUNCTION(execCalcResultGradeFromAttentionPoint); \
	DECLARE_FUNCTION(execCalcResultGradeFromFeverCount); \
	DECLARE_FUNCTION(execCalcResultGradeFromKillCount); \
	DECLARE_FUNCTION(execCalcResultStarGrade); \
	DECLARE_FUNCTION(execGetAIPlayerParam); \
	DECLARE_FUNCTION(execGetAIPlayerStampedeLevelParam); \
	DECLARE_FUNCTION(execGetAttachParam); \
	DECLARE_FUNCTION(execGetDamageReactionParam); \
	DECLARE_FUNCTION(execGetEffectParam); \
	DECLARE_FUNCTION(execGetFallParam); \
	DECLARE_FUNCTION(execGetGuardReactionParam); \
	DECLARE_FUNCTION(execGetHitEffectParam); \
	DECLARE_FUNCTION(execGetItemResourceParam); \
	DECLARE_FUNCTION(execGetShieldParam); \
	DECLARE_FUNCTION(execGetSystemMotionParam); \
	DECLARE_FUNCTION(execGetUseItemParam); \
	DECLARE_FUNCTION(execGetVehicleParam); \
	DECLARE_FUNCTION(execGetVictoryCutsceneParam); \
	DECLARE_FUNCTION(execGetWeaponGunParam); \
	DECLARE_FUNCTION(execGetWeaponMeleeParam); \
	DECLARE_FUNCTION(execGetWeaponParam); \
	DECLARE_FUNCTION(execGetWeaponThrowParam); \
	DECLARE_FUNCTION(execGetWeaponTrapParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSDatabase(); \
	friend struct Z_Construct_UClass_AELSSDatabase_Statics; \
public: \
	DECLARE_CLASS(AELSSDatabase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAELSSDatabase(); \
	friend struct Z_Construct_UClass_AELSSDatabase_Statics; \
public: \
	DECLARE_CLASS(AELSSDatabase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSDatabase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSDatabase(AELSSDatabase&&); \
	NO_API AELSSDatabase(const AELSSDatabase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSDatabase(AELSSDatabase&&); \
	NO_API AELSSDatabase(const AELSSDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_33_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
