// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FStPassiveSkillData;
enum class ESpecialMovesType : uint8;
class UELGaugeRoster;
class UELGaugeStatusIcon;
class UELGaugeFire;
class UCanvasPanel;
class UImage;
class UWidgetAnimation;
struct FVector2D;
class AELCharacter_Native;
struct FCareerActionSkillData;
struct FLinearColor;
#ifdef ABP_200508_ELIngameHUDHPGaugeBase_generated_h
#error "ELIngameHUDHPGaugeBase.generated.h already included, missing '#pragma once' in ELIngameHUDHPGaugeBase.h"
#endif
#define ABP_200508_ELIngameHUDHPGaugeBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGaugeMaterialParameter); \
	DECLARE_FUNCTION(execGetGaugeTexture); \
	DECLARE_FUNCTION(execIsDangerState); \
	DECLARE_FUNCTION(execIsExciteState); \
	DECLARE_FUNCTION(execIsSpecialState); \
	DECLARE_FUNCTION(execOnAnimationFinishedEvent_DangerStart); \
	DECLARE_FUNCTION(execOnAnimationFinishedEvent_GuageMaxStart); \
	DECLARE_FUNCTION(execOnAnimationFinishedEvent_RingTime); \
	DECLARE_FUNCTION(execOnAnimationFinishedEvent_SpecialStart); \
	DECLARE_FUNCTION(execOnChangedTouchLeaveRingFlag); \
	DECLARE_FUNCTION(execOnFinishedAnimation_StatusText); \
	DECLARE_FUNCTION(execOnMeterValuePenalty); \
	DECLARE_FUNCTION(execOnPlayActionSkill); \
	DECLARE_FUNCTION(execOnPlayPassiveSkillEffect); \
	DECLARE_FUNCTION(execOnRemoveGloveBuff); \
	DECLARE_FUNCTION(execOnReversal); \
	DECLARE_FUNCTION(execOnReverseDirection); \
	DECLARE_FUNCTION(execSetNativeParam); \
	DECLARE_FUNCTION(execSetTargetCharacterNative); \
	DECLARE_FUNCTION(execUpdateDynamicParam_N); \
	DECLARE_FUNCTION(execUpdateGaugeColor_Native);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGaugeMaterialParameter); \
	DECLARE_FUNCTION(execGetGaugeTexture); \
	DECLARE_FUNCTION(execIsDangerState); \
	DECLARE_FUNCTION(execIsExciteState); \
	DECLARE_FUNCTION(execIsSpecialState); \
	DECLARE_FUNCTION(execOnAnimationFinishedEvent_DangerStart); \
	DECLARE_FUNCTION(execOnAnimationFinishedEvent_GuageMaxStart); \
	DECLARE_FUNCTION(execOnAnimationFinishedEvent_RingTime); \
	DECLARE_FUNCTION(execOnAnimationFinishedEvent_SpecialStart); \
	DECLARE_FUNCTION(execOnChangedTouchLeaveRingFlag); \
	DECLARE_FUNCTION(execOnFinishedAnimation_StatusText); \
	DECLARE_FUNCTION(execOnMeterValuePenalty); \
	DECLARE_FUNCTION(execOnPlayActionSkill); \
	DECLARE_FUNCTION(execOnPlayPassiveSkillEffect); \
	DECLARE_FUNCTION(execOnRemoveGloveBuff); \
	DECLARE_FUNCTION(execOnReversal); \
	DECLARE_FUNCTION(execOnReverseDirection); \
	DECLARE_FUNCTION(execSetNativeParam); \
	DECLARE_FUNCTION(execSetTargetCharacterNative); \
	DECLARE_FUNCTION(execUpdateDynamicParam_N); \
	DECLARE_FUNCTION(execUpdateGaugeColor_Native);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_EVENT_PARMS \
	struct ELIngameHUDHPGaugeBase_eventOnChangeCanOperateDownPinchMove_Parms \
	{ \
		bool Enable; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnChangeDangerState_Parms \
	{ \
		bool Enable; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnChangeExciteState_Parms \
	{ \
		bool Enable; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnChangeRollOutDownState_Parms \
	{ \
		bool Enable; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnChangeSpecialState_Parms \
	{ \
		bool Enable; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnPlayAnimationActionSkill_BP_Parms \
	{ \
		FCareerActionSkillData ActionSkillData; \
		float LoopTime; \
		bool Restart; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnPlayAnimationMeterValuePenalty_BP_Parms \
	{ \
		float PenaltyRate; \
		float LoopTime; \
		bool Restart; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnPlayAnimationPartDamage_BP_Parms \
	{ \
		FLinearColor PartsColor; \
		uint8 LimbHPType; \
		float LoopTime; \
		bool Restart; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnPlayAnimationPassiveSkill_BP_Parms \
	{ \
		FStPassiveSkillData PassiveSkillData; \
		float LoopTime; \
		bool Restart; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnPlayAnimationRemoveGlove_BP_Parms \
	{ \
		float LoopTime; \
		bool Restart; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnPlayAnimationReversal_BP_Parms \
	{ \
		bool Reversal; \
		ESpecialMovesType SpecialMovesType; \
		float LoopTime; \
		bool Restart; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnPlayAnimationReverseDirection_BP_Parms \
	{ \
		bool InReverse; \
		float LoopTime; \
		bool Restart; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventOnPlayMomentumUpAnimation_BP_Parms \
	{ \
		float MeterRate; \
	}; \
	struct ELIngameHUDHPGaugeBase_eventUpdate_BP_Parms \
	{ \
		AELCharacter_Native* Player; \
		float DeltaTime; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELIngameHUDHPGaugeBase(); \
	friend struct Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics; \
public: \
	DECLARE_CLASS(UELIngameHUDHPGaugeBase, UELIngameHUDBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELIngameHUDHPGaugeBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUELIngameHUDHPGaugeBase(); \
	friend struct Z_Construct_UClass_UELIngameHUDHPGaugeBase_Statics; \
public: \
	DECLARE_CLASS(UELIngameHUDHPGaugeBase, UELIngameHUDBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELIngameHUDHPGaugeBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELIngameHUDHPGaugeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELIngameHUDHPGaugeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELIngameHUDHPGaugeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELIngameHUDHPGaugeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELIngameHUDHPGaugeBase(UELIngameHUDHPGaugeBase&&); \
	NO_API UELIngameHUDHPGaugeBase(const UELIngameHUDHPGaugeBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELIngameHUDHPGaugeBase(UELIngameHUDHPGaugeBase&&); \
	NO_API UELIngameHUDHPGaugeBase(const UELIngameHUDHPGaugeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELIngameHUDHPGaugeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELIngameHUDHPGaugeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELIngameHUDHPGaugeBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUseTagActiveIcon_N() { return STRUCT_OFFSET(UELIngameHUDHPGaugeBase, bUseTagActiveIcon_N); } \
	FORCEINLINE static uint32 __PPO__UseEliminateCount_N() { return STRUCT_OFFSET(UELIngameHUDHPGaugeBase, UseEliminateCount_N); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_23_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELIngameHUDHPGaugeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELIngameHUDHPGaugeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
