// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSLogIconType : uint8;
struct FSSLogTextParam;
enum class ESSAreaCountDownTextType : uint8;
enum class ESSAttentionReason : uint8;
class AActor;
enum class ESSCharacterHpType : uint8;
enum class ESSPickupType : uint8;
enum class ESSVehicleType : uint8;
enum class ESSInteractOperate : uint8;
enum class ESSInteractExecute : uint8;
class AELSSPlayerState;
class AELSSStorm;
struct FVector;
struct FSSAbilityParam;
enum class ESSOperationGuideExecute : uint8;
#ifdef ABP_200508_ELSSPanelInGameBase_generated_h
#error "ELSSPanelInGameBase.generated.h already included, missing '#pragma once' in ELSSPanelInGameBase.h"
#endif
#define ABP_200508_ELSSPanelInGameBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddMessage); \
	DECLARE_FUNCTION(execAddMultiColorLogMessage); \
	DECLARE_FUNCTION(execApplyAbilityCoolTimeGauge); \
	DECLARE_FUNCTION(execApplyAbilityEffectiveGauge); \
	DECLARE_FUNCTION(execApplyAliveCount); \
	DECLARE_FUNCTION(execApplyAnnouncePlate); \
	DECLARE_FUNCTION(execApplyAttentionBoostValue); \
	DECLARE_FUNCTION(execApplyAttentionGauge); \
	DECLARE_FUNCTION(execApplyCharacterHpGauge); \
	DECLARE_FUNCTION(execApplyHasCarrotMedal); \
	DECLARE_FUNCTION(execApplyHeatMeater); \
	DECLARE_FUNCTION(execApplyHUDWatchGameMode); \
	DECLARE_FUNCTION(execApplyInteractPoint); \
	DECLARE_FUNCTION(execApplyInventoryBareIconGuideState); \
	DECLARE_FUNCTION(execApplyInventoryIcon); \
	DECLARE_FUNCTION(execApplyKOCount); \
	DECLARE_FUNCTION(execApplyOnlineID); \
	DECLARE_FUNCTION(execApplyRatioToInteractUI); \
	DECLARE_FUNCTION(execApplyShieldDurableValue); \
	DECLARE_FUNCTION(execApplySpectators); \
	DECLARE_FUNCTION(execApplyStormTime); \
	DECLARE_FUNCTION(execApplyVehicleStatusDurability); \
	DECLARE_FUNCTION(execApplyWrestlerDownHp); \
	DECLARE_FUNCTION(execApplyWrestlerHp); \
	DECLARE_FUNCTION(execCancelSpectateWindowHold); \
	DECLARE_FUNCTION(execDeleteInventoryIcon); \
	DECLARE_FUNCTION(execOnChangeSpectateUser); \
	DECLARE_FUNCTION(execOnPushQuitMatch); \
	DECLARE_FUNCTION(execPlaySSSkillNotice); \
	DECLARE_FUNCTION(execResetAllAbilities); \
	DECLARE_FUNCTION(execResetAllLogs); \
	DECLARE_FUNCTION(execResetAttentionGauge); \
	DECLARE_FUNCTION(execResetSSSkillNotice); \
	DECLARE_FUNCTION(execSetAbilityGuideVisible); \
	DECLARE_FUNCTION(execSetAbilityHoldButtonVisible); \
	DECLARE_FUNCTION(execSetAbilityVisible); \
	DECLARE_FUNCTION(execSetActorUICanShow); \
	DECLARE_FUNCTION(execSetAndApplyMaxAttentionValue); \
	DECLARE_FUNCTION(execSetGamerTag); \
	DECLARE_FUNCTION(execSetInventoryIconValue); \
	DECLARE_FUNCTION(execSetInventoryItem); \
	DECLARE_FUNCTION(execSetInventoryLimit); \
	DECLARE_FUNCTION(execSetInventoryOperationButtonVisibleInPause); \
	DECLARE_FUNCTION(execSetInventoryPosition); \
	DECLARE_FUNCTION(execSetInventoryVisible); \
	DECLARE_FUNCTION(execSetMapAnnounceStormAndGuideVisible); \
	DECLARE_FUNCTION(execSetMapOperationButtonVisibleInPause); \
	DECLARE_FUNCTION(execSetMinimapTexture); \
	DECLARE_FUNCTION(execSetOperationGuideGuardState); \
	DECLARE_FUNCTION(execSetOperationGuideVisibleInPause); \
	DECLARE_FUNCTION(execSetSpectatedInfo); \
	DECLARE_FUNCTION(execSetSpectateWindowHoldRatio); \
	DECLARE_FUNCTION(execSetStormActor); \
	DECLARE_FUNCTION(execSetTargetActorToInteractUI); \
	DECLARE_FUNCTION(execSetupAbilityUI); \
	DECLARE_FUNCTION(execSetVisibleAbilitySlot); \
	DECLARE_FUNCTION(execSetVisibleFeverEffect); \
	DECLARE_FUNCTION(execSetVisibleToInteractUI); \
	DECLARE_FUNCTION(execSetVisibleToItemInteractUI); \
	DECLARE_FUNCTION(execSetVisibleToOperationGuide); \
	DECLARE_FUNCTION(execSetVisibleToSpectateWindow); \
	DECLARE_FUNCTION(execShowOffVehicleStatus); \
	DECLARE_FUNCTION(execSwitchMapMode); \
	DECLARE_FUNCTION(execSwitchWrestlerHpType); \
	DECLARE_FUNCTION(execUpdateKeyConfig);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddMessage); \
	DECLARE_FUNCTION(execAddMultiColorLogMessage); \
	DECLARE_FUNCTION(execApplyAbilityCoolTimeGauge); \
	DECLARE_FUNCTION(execApplyAbilityEffectiveGauge); \
	DECLARE_FUNCTION(execApplyAliveCount); \
	DECLARE_FUNCTION(execApplyAnnouncePlate); \
	DECLARE_FUNCTION(execApplyAttentionBoostValue); \
	DECLARE_FUNCTION(execApplyAttentionGauge); \
	DECLARE_FUNCTION(execApplyCharacterHpGauge); \
	DECLARE_FUNCTION(execApplyHasCarrotMedal); \
	DECLARE_FUNCTION(execApplyHeatMeater); \
	DECLARE_FUNCTION(execApplyHUDWatchGameMode); \
	DECLARE_FUNCTION(execApplyInteractPoint); \
	DECLARE_FUNCTION(execApplyInventoryBareIconGuideState); \
	DECLARE_FUNCTION(execApplyInventoryIcon); \
	DECLARE_FUNCTION(execApplyKOCount); \
	DECLARE_FUNCTION(execApplyOnlineID); \
	DECLARE_FUNCTION(execApplyRatioToInteractUI); \
	DECLARE_FUNCTION(execApplyShieldDurableValue); \
	DECLARE_FUNCTION(execApplySpectators); \
	DECLARE_FUNCTION(execApplyStormTime); \
	DECLARE_FUNCTION(execApplyVehicleStatusDurability); \
	DECLARE_FUNCTION(execApplyWrestlerDownHp); \
	DECLARE_FUNCTION(execApplyWrestlerHp); \
	DECLARE_FUNCTION(execCancelSpectateWindowHold); \
	DECLARE_FUNCTION(execDeleteInventoryIcon); \
	DECLARE_FUNCTION(execOnChangeSpectateUser); \
	DECLARE_FUNCTION(execOnPushQuitMatch); \
	DECLARE_FUNCTION(execPlaySSSkillNotice); \
	DECLARE_FUNCTION(execResetAllAbilities); \
	DECLARE_FUNCTION(execResetAllLogs); \
	DECLARE_FUNCTION(execResetAttentionGauge); \
	DECLARE_FUNCTION(execResetSSSkillNotice); \
	DECLARE_FUNCTION(execSetAbilityGuideVisible); \
	DECLARE_FUNCTION(execSetAbilityHoldButtonVisible); \
	DECLARE_FUNCTION(execSetAbilityVisible); \
	DECLARE_FUNCTION(execSetActorUICanShow); \
	DECLARE_FUNCTION(execSetAndApplyMaxAttentionValue); \
	DECLARE_FUNCTION(execSetGamerTag); \
	DECLARE_FUNCTION(execSetInventoryIconValue); \
	DECLARE_FUNCTION(execSetInventoryItem); \
	DECLARE_FUNCTION(execSetInventoryLimit); \
	DECLARE_FUNCTION(execSetInventoryOperationButtonVisibleInPause); \
	DECLARE_FUNCTION(execSetInventoryPosition); \
	DECLARE_FUNCTION(execSetInventoryVisible); \
	DECLARE_FUNCTION(execSetMapAnnounceStormAndGuideVisible); \
	DECLARE_FUNCTION(execSetMapOperationButtonVisibleInPause); \
	DECLARE_FUNCTION(execSetMinimapTexture); \
	DECLARE_FUNCTION(execSetOperationGuideGuardState); \
	DECLARE_FUNCTION(execSetOperationGuideVisibleInPause); \
	DECLARE_FUNCTION(execSetSpectatedInfo); \
	DECLARE_FUNCTION(execSetSpectateWindowHoldRatio); \
	DECLARE_FUNCTION(execSetStormActor); \
	DECLARE_FUNCTION(execSetTargetActorToInteractUI); \
	DECLARE_FUNCTION(execSetupAbilityUI); \
	DECLARE_FUNCTION(execSetVisibleAbilitySlot); \
	DECLARE_FUNCTION(execSetVisibleFeverEffect); \
	DECLARE_FUNCTION(execSetVisibleToInteractUI); \
	DECLARE_FUNCTION(execSetVisibleToItemInteractUI); \
	DECLARE_FUNCTION(execSetVisibleToOperationGuide); \
	DECLARE_FUNCTION(execSetVisibleToSpectateWindow); \
	DECLARE_FUNCTION(execShowOffVehicleStatus); \
	DECLARE_FUNCTION(execSwitchMapMode); \
	DECLARE_FUNCTION(execSwitchWrestlerHpType); \
	DECLARE_FUNCTION(execUpdateKeyConfig);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_EVENT_PARMS \
	struct ELSSPanelInGameBase_eventIsItemProgressBarShow_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPanelInGameBase_eventIsItemProgressBarShow_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSPanelInGameBase_eventOpenItemProgressBar_Parms \
	{ \
		float InItemUsageTime; \
		FString InActText; \
	}; \
	struct ELSSPanelInGameBase_eventSetVisibleAimReticle_Parms \
	{ \
		bool InVisible; \
	}; \
	struct ELSSPanelInGameBase_eventUpdatePlayInAnimation_Parms \
	{ \
		float InDeltaTime; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSPanelInGameBase(); \
	friend struct Z_Construct_UClass_UELSSPanelInGameBase_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelInGameBase, UELSSPanelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelInGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUELSSPanelInGameBase(); \
	friend struct Z_Construct_UClass_UELSSPanelInGameBase_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelInGameBase, UELSSPanelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelInGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSPanelInGameBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSPanelInGameBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelInGameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelInGameBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelInGameBase(UELSSPanelInGameBase&&); \
	NO_API UELSSPanelInGameBase(const UELSSPanelInGameBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelInGameBase(UELSSPanelInGameBase&&); \
	NO_API UELSSPanelInGameBase(const UELSSPanelInGameBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelInGameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelInGameBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSPanelInGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilityContainer() { return STRUCT_OFFSET(UELSSPanelInGameBase, AbilityContainer); } \
	FORCEINLINE static uint32 __PPO__CharacterHpgaugeContainer() { return STRUCT_OFFSET(UELSSPanelInGameBase, CharacterHpgaugeContainer); } \
	FORCEINLINE static uint32 __PPO__OnlineIDContainer() { return STRUCT_OFFSET(UELSSPanelInGameBase, OnlineIDContainer); } \
	FORCEINLINE static uint32 __PPO__InteractPointContainer() { return STRUCT_OFFSET(UELSSPanelInGameBase, InteractPointContainer); } \
	FORCEINLINE static uint32 __PPO__AttentionGauge() { return STRUCT_OFFSET(UELSSPanelInGameBase, AttentionGauge); } \
	FORCEINLINE static uint32 __PPO__AreaCountDown() { return STRUCT_OFFSET(UELSSPanelInGameBase, AreaCountDown); } \
	FORCEINLINE static uint32 __PPO__WrestlerStatus() { return STRUCT_OFFSET(UELSSPanelInGameBase, WrestlerStatus); } \
	FORCEINLINE static uint32 __PPO__HeatMeater() { return STRUCT_OFFSET(UELSSPanelInGameBase, HeatMeater); } \
	FORCEINLINE static uint32 __PPO__MiniMap() { return STRUCT_OFFSET(UELSSPanelInGameBase, MiniMap); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(UELSSPanelInGameBase, Inventory); } \
	FORCEINLINE static uint32 __PPO__OperationGuide() { return STRUCT_OFFSET(UELSSPanelInGameBase, OperationGuide); } \
	FORCEINLINE static uint32 __PPO__LogSet() { return STRUCT_OFFSET(UELSSPanelInGameBase, LogSet); } \
	FORCEINLINE static uint32 __PPO__Interact() { return STRUCT_OFFSET(UELSSPanelInGameBase, Interact); } \
	FORCEINLINE static uint32 __PPO__SSSkillNotice() { return STRUCT_OFFSET(UELSSPanelInGameBase, SSSkillNotice); } \
	FORCEINLINE static uint32 __PPO__SpectateWindow() { return STRUCT_OFFSET(UELSSPanelInGameBase, SpectateWindow); } \
	FORCEINLINE static uint32 __PPO__Spectators() { return STRUCT_OFFSET(UELSSPanelInGameBase, Spectators); } \
	FORCEINLINE static uint32 __PPO__VehicleStatus() { return STRUCT_OFFSET(UELSSPanelInGameBase, VehicleStatus); } \
	FORCEINLINE static uint32 __PPO__PlayInAnim() { return STRUCT_OFFSET(UELSSPanelInGameBase, PlayInAnim); } \
	FORCEINLINE static uint32 __PPO__PlayInAnimationElapsed() { return STRUCT_OFFSET(UELSSPanelInGameBase, PlayInAnimationElapsed); } \
	FORCEINLINE static uint32 __PPO__IsPlayingPlayInAnimation() { return STRUCT_OFFSET(UELSSPanelInGameBase, IsPlayingPlayInAnimation); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_40_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSPanelInGameBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelInGameBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
