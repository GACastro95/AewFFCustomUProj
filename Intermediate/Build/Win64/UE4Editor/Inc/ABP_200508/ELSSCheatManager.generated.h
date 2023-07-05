// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSAttentionReason : uint8;
enum class ESSActionTransitTrigger : uint8;
enum class EWrestlerID_N : uint8;
enum class ESSGameStateDebugFlag : uint8;
enum class ESSMoveCommand : uint8;
enum class ESSPlayerDebugFlag : uint8;
enum class ESSItemBoxType : uint8;
enum class ESSPlayerStartLocatorType : uint8;
enum class ESSPlayerStartLocatorAreaId : uint8;
#ifdef ABP_200508_ELSSCheatManager_generated_h
#error "ELSSCheatManager.generated.h already included, missing '#pragma once' in ELSSCheatManager.h"
#endif
#define ABP_200508_ELSSCheatManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSSAddAttentionPoint); \
	DECLARE_FUNCTION(execSSAIDisableAll); \
	DECLARE_FUNCTION(execSSAIPlayerAutoKill); \
	DECLARE_FUNCTION(execSSAIPlayerAutoMove); \
	DECLARE_FUNCTION(execSSAIPlayerAutoRequestTransit); \
	DECLARE_FUNCTION(execSSAIPlayerNoDamage); \
	DECLARE_FUNCTION(execSSAIPlayerSpawn); \
	DECLARE_FUNCTION(execSSAIPlayerSpawnPreset); \
	DECLARE_FUNCTION(execSSAIPlayerSpawnPresetByName); \
	DECLARE_FUNCTION(execSSAssembleThemAll); \
	DECLARE_FUNCTION(execSSChangeCameraTarget); \
	DECLARE_FUNCTION(execSSCheatDetection); \
	DECLARE_FUNCTION(execSSCloseConnection); \
	DECLARE_FUNCTION(execSSDestroyAllPickupObjects); \
	DECLARE_FUNCTION(execSSDestroyThemAll); \
	DECLARE_FUNCTION(execSSDisableCameraAction); \
	DECLARE_FUNCTION(execSSDisableNoResponseTimeOut); \
	DECLARE_FUNCTION(execSSForceGuardToTarget); \
	DECLARE_FUNCTION(execSSForceNoResponseMode); \
	DECLARE_FUNCTION(execSSForciblyEndMatch); \
	DECLARE_FUNCTION(execSSGameStateDebugFlag); \
	DECLARE_FUNCTION(execSSLobbySkip); \
	DECLARE_FUNCTION(execSSMapIconForceVisible); \
	DECLARE_FUNCTION(execSSMoveIdOverride); \
	DECLARE_FUNCTION(execSSMoveIdOverrideEnable); \
	DECLARE_FUNCTION(execSSMoveIdOverrideWeaponSpecial); \
	DECLARE_FUNCTION(execSSNearKo); \
	DECLARE_FUNCTION(execSSNetworkProfilerOnServer); \
	DECLARE_FUNCTION(execSSPlayerDebugFlag); \
	DECLARE_FUNCTION(execSSPlayerDuplicate); \
	DECLARE_FUNCTION(execSSPlayerSetHP); \
	DECLARE_FUNCTION(execSSPlayerSuicide); \
	DECLARE_FUNCTION(execSSResetAttention); \
	DECLARE_FUNCTION(execSSRotationThemAll); \
	DECLARE_FUNCTION(execSSRoundSpeed); \
	DECLARE_FUNCTION(execSSServerCrash); \
	DECLARE_FUNCTION(execSSServerMemReport); \
	DECLARE_FUNCTION(execSSSetAttentionPoint); \
	DECLARE_FUNCTION(execSSSetHeatLevel); \
	DECLARE_FUNCTION(execSSSetSubLevelVisible); \
	DECLARE_FUNCTION(execSSShowAimOffsetStatus); \
	DECLARE_FUNCTION(execSSShowAttackCapsule); \
	DECLARE_FUNCTION(execSSShowAttention); \
	DECLARE_FUNCTION(execSSShowAttentionStatus); \
	DECLARE_FUNCTION(execSSShowDamage); \
	DECLARE_FUNCTION(execSSShowDamageReason); \
	DECLARE_FUNCTION(execSSShowGaugeValue); \
	DECLARE_FUNCTION(execSSShowMapAreaId); \
	DECLARE_FUNCTION(execSSShowMoveCorrection); \
	DECLARE_FUNCTION(execSSShowPlayerStatus); \
	DECLARE_FUNCTION(execSSShowRoundInfo); \
	DECLARE_FUNCTION(execSSShowVehicleStatus); \
	DECLARE_FUNCTION(execSSSpawnAndEquipWeapon); \
	DECLARE_FUNCTION(execSSSpawnItem); \
	DECLARE_FUNCTION(execSSSpawnItemBox); \
	DECLARE_FUNCTION(execSSSpawnShield); \
	DECLARE_FUNCTION(execSSSpawnVehicle); \
	DECLARE_FUNCTION(execSSSpawnWeapon); \
	DECLARE_FUNCTION(execSSStormPrint); \
	DECLARE_FUNCTION(execSSSwitchCamera); \
	DECLARE_FUNCTION(execSSTeleportToPlayerStart); \
	DECLARE_FUNCTION(execSSTeleportToPlayerStartLocator); \
	DECLARE_FUNCTION(execSSToggleGuardMode); \
	DECLARE_FUNCTION(execSSToggleGuardToTarget); \
	DECLARE_FUNCTION(execSSToggleHUDVisibility); \
	DECLARE_FUNCTION(execSSUnlimitedUseItemAndWeapon); \
	DECLARE_FUNCTION(execSSVehicleFullDurability); \
	DECLARE_FUNCTION(execSSVehicleInvincible); \
	DECLARE_FUNCTION(execSSVehicleResetRotation); \
	DECLARE_FUNCTION(execSSVehicleSetDurability); \
	DECLARE_FUNCTION(execSSVisualizeStormCourse);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSSAddAttentionPoint); \
	DECLARE_FUNCTION(execSSAIDisableAll); \
	DECLARE_FUNCTION(execSSAIPlayerAutoKill); \
	DECLARE_FUNCTION(execSSAIPlayerAutoMove); \
	DECLARE_FUNCTION(execSSAIPlayerAutoRequestTransit); \
	DECLARE_FUNCTION(execSSAIPlayerNoDamage); \
	DECLARE_FUNCTION(execSSAIPlayerSpawn); \
	DECLARE_FUNCTION(execSSAIPlayerSpawnPreset); \
	DECLARE_FUNCTION(execSSAIPlayerSpawnPresetByName); \
	DECLARE_FUNCTION(execSSAssembleThemAll); \
	DECLARE_FUNCTION(execSSChangeCameraTarget); \
	DECLARE_FUNCTION(execSSCheatDetection); \
	DECLARE_FUNCTION(execSSCloseConnection); \
	DECLARE_FUNCTION(execSSDestroyAllPickupObjects); \
	DECLARE_FUNCTION(execSSDestroyThemAll); \
	DECLARE_FUNCTION(execSSDisableCameraAction); \
	DECLARE_FUNCTION(execSSDisableNoResponseTimeOut); \
	DECLARE_FUNCTION(execSSForceGuardToTarget); \
	DECLARE_FUNCTION(execSSForceNoResponseMode); \
	DECLARE_FUNCTION(execSSForciblyEndMatch); \
	DECLARE_FUNCTION(execSSGameStateDebugFlag); \
	DECLARE_FUNCTION(execSSLobbySkip); \
	DECLARE_FUNCTION(execSSMapIconForceVisible); \
	DECLARE_FUNCTION(execSSMoveIdOverride); \
	DECLARE_FUNCTION(execSSMoveIdOverrideEnable); \
	DECLARE_FUNCTION(execSSMoveIdOverrideWeaponSpecial); \
	DECLARE_FUNCTION(execSSNearKo); \
	DECLARE_FUNCTION(execSSNetworkProfilerOnServer); \
	DECLARE_FUNCTION(execSSPlayerDebugFlag); \
	DECLARE_FUNCTION(execSSPlayerDuplicate); \
	DECLARE_FUNCTION(execSSPlayerSetHP); \
	DECLARE_FUNCTION(execSSPlayerSuicide); \
	DECLARE_FUNCTION(execSSResetAttention); \
	DECLARE_FUNCTION(execSSRotationThemAll); \
	DECLARE_FUNCTION(execSSRoundSpeed); \
	DECLARE_FUNCTION(execSSServerCrash); \
	DECLARE_FUNCTION(execSSServerMemReport); \
	DECLARE_FUNCTION(execSSSetAttentionPoint); \
	DECLARE_FUNCTION(execSSSetHeatLevel); \
	DECLARE_FUNCTION(execSSSetSubLevelVisible); \
	DECLARE_FUNCTION(execSSShowAimOffsetStatus); \
	DECLARE_FUNCTION(execSSShowAttackCapsule); \
	DECLARE_FUNCTION(execSSShowAttention); \
	DECLARE_FUNCTION(execSSShowAttentionStatus); \
	DECLARE_FUNCTION(execSSShowDamage); \
	DECLARE_FUNCTION(execSSShowDamageReason); \
	DECLARE_FUNCTION(execSSShowGaugeValue); \
	DECLARE_FUNCTION(execSSShowMapAreaId); \
	DECLARE_FUNCTION(execSSShowMoveCorrection); \
	DECLARE_FUNCTION(execSSShowPlayerStatus); \
	DECLARE_FUNCTION(execSSShowRoundInfo); \
	DECLARE_FUNCTION(execSSShowVehicleStatus); \
	DECLARE_FUNCTION(execSSSpawnAndEquipWeapon); \
	DECLARE_FUNCTION(execSSSpawnItem); \
	DECLARE_FUNCTION(execSSSpawnItemBox); \
	DECLARE_FUNCTION(execSSSpawnShield); \
	DECLARE_FUNCTION(execSSSpawnVehicle); \
	DECLARE_FUNCTION(execSSSpawnWeapon); \
	DECLARE_FUNCTION(execSSStormPrint); \
	DECLARE_FUNCTION(execSSSwitchCamera); \
	DECLARE_FUNCTION(execSSTeleportToPlayerStart); \
	DECLARE_FUNCTION(execSSTeleportToPlayerStartLocator); \
	DECLARE_FUNCTION(execSSToggleGuardMode); \
	DECLARE_FUNCTION(execSSToggleGuardToTarget); \
	DECLARE_FUNCTION(execSSToggleHUDVisibility); \
	DECLARE_FUNCTION(execSSUnlimitedUseItemAndWeapon); \
	DECLARE_FUNCTION(execSSVehicleFullDurability); \
	DECLARE_FUNCTION(execSSVehicleInvincible); \
	DECLARE_FUNCTION(execSSVehicleResetRotation); \
	DECLARE_FUNCTION(execSSVehicleSetDurability); \
	DECLARE_FUNCTION(execSSVisualizeStormCourse);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSCheatManager(); \
	friend struct Z_Construct_UClass_UELSSCheatManager_Statics; \
public: \
	DECLARE_CLASS(UELSSCheatManager, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCheatManager) \
	DECLARE_WITHIN(AELSSPlayerController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELSSCheatManager(); \
	friend struct Z_Construct_UClass_UELSSCheatManager_Statics; \
public: \
	DECLARE_CLASS(UELSSCheatManager, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCheatManager) \
	DECLARE_WITHIN(AELSSPlayerController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSCheatManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCheatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCheatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCheatManager(UELSSCheatManager&&); \
	NO_API UELSSCheatManager(const UELSSCheatManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCheatManager(UELSSCheatManager&&); \
	NO_API UELSSCheatManager(const UELSSCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCheatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCheatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSCheatManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_15_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSCheatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSCheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
