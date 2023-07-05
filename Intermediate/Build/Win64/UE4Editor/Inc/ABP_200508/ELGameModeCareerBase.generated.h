// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerCAWHeightConvert;
struct FCareerEventLocation;
struct FCareerEventSceneReplaceAnimation;
struct FCareerSchedule;
struct FCareerTutorial;
enum class EPersonalityType : uint8;
struct FCareerEventActionInfo;
struct FTransform;
struct FCareerEventBaseInfo;
struct FCareerAffectMatchInjury;
struct FCareerAffectMatchMotivation;
class AELCareerAssetLoadBase;
class AELCareerBalanceAdjustParam;
class AELCareerCameraManagerBase;
class APawn;
class AELCareerChameleonBase;
class AELCareerCutSceneManager;
struct FCareerCutsceneParam;
class AELCareerCutSceneUtilityBase;
struct FCareerDiningInfo;
struct FEditWrestlerParam;
struct FCareerEventMessage;
struct FCareerEvent;
class AELCareerEventSceneManager;
struct FCareerEventText;
class AELCareerItemManager;
class AELCareerLayoutSceneManager;
struct FCareerMatch;
enum class ECareerScenarioPart : uint8;
struct FCareerMatchSetting;
struct FCareerMiniGame;
class AELCareerMovieSceneManager;
class AELCareerOtherMenuManager;
class AELCareerSchedule;
class AELCareerScriptManager;
class AELCareerSkillManager;
class AELCareerSquareManager;
class AELCareerStateManager;
class AELCareerStoryCardLottery;
class AELCareerStoryDataActor;
class AELCareerVehicleActor;
enum class ECareerCutsceneCastType : uint8;
class AActor;
enum class ECareerStoryResultCondition : uint8;
enum class ECareerRingObject : uint8;
enum class ECareerStageType : uint8;
enum class yEnMenuWidgetType : uint8;
enum class ECareerTransitionType : uint8;
class UELCareerDebugInfoWidget;
struct FCareerMatchResultInfo;
class UDataTable;
enum class ECareerMapLightScenario : uint8;
enum class ECareerStringTable : uint8;
enum class ECareerBGMType : uint8;
enum class ECareerSEType : uint8;
enum class ECareerInGameHUDType : uint8;
enum class ECareerSetupMyWrestlerUpdate : uint8;
enum class EWrestlerID_N : uint8;
class UCareerSnapshot;
#ifdef ABP_200508_ELGameModeCareerBase_generated_h
#error "ELGameModeCareerBase.generated.h already included, missing '#pragma once' in ELGameModeCareerBase.h"
#endif
#define ABP_200508_ELGameModeCareerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCareerCAWHeightConvertData); \
	DECLARE_FUNCTION(execAddCareerEventArenaLocationData); \
	DECLARE_FUNCTION(execAddCareerEventBackStageLocationData); \
	DECLARE_FUNCTION(execAddCareerEventSceneReplaceAnimationData); \
	DECLARE_FUNCTION(execAddCareerScheduleData); \
	DECLARE_FUNCTION(execAddCareerTutorialData); \
	DECLARE_FUNCTION(execCheckSnapShotEvent); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetChoiceSelectKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetChoiceSelectStringKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetChoiceTitleKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetChoiceTitleStringKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetPersonality); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetTalkKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetTalkStringKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetTitleKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetTitleStringKey); \
	DECLARE_FUNCTION(execGetActionInfo); \
	DECLARE_FUNCTION(execGetActionInfoCounter); \
	DECLARE_FUNCTION(execGetActionInfoList); \
	DECLARE_FUNCTION(execGetActionInfoTextID); \
	DECLARE_FUNCTION(execGetAreaTargetPoint); \
	DECLARE_FUNCTION(execGetArenaLocation); \
	DECLARE_FUNCTION(execGetBackStageLocation); \
	DECLARE_FUNCTION(execGetBackStageSubLevelUtility); \
	DECLARE_FUNCTION(execGetBaseInfo); \
	DECLARE_FUNCTION(execGetCareerAffectMatchInjury); \
	DECLARE_FUNCTION(execGetCareerAffectMatchMotivation); \
	DECLARE_FUNCTION(execGetCareerAssetLoad); \
	DECLARE_FUNCTION(execGetCareerBalanceAdjustParam); \
	DECLARE_FUNCTION(execGetCareerCameraManager); \
	DECLARE_FUNCTION(execGetCareerCameraPawn); \
	DECLARE_FUNCTION(execGetCareerChameleon); \
	DECLARE_FUNCTION(execGetCareerCutSceneManager); \
	DECLARE_FUNCTION(execGetCareerCutsceneParamRowData); \
	DECLARE_FUNCTION(execGetCareerCutSceneUtilityBase); \
	DECLARE_FUNCTION(execGetCareerDiningInfoFromDataTable); \
	DECLARE_FUNCTION(execGetCareerEditWrestlerParam); \
	DECLARE_FUNCTION(execGetCareerEventMessageRowData); \
	DECLARE_FUNCTION(execGetCareerEventRowData); \
	DECLARE_FUNCTION(execGetCareerEventSceneManager); \
	DECLARE_FUNCTION(execGetCareerEventTextRowData); \
	DECLARE_FUNCTION(execGetCareerItemManager); \
	DECLARE_FUNCTION(execGetCareerLayoutSceneManager); \
	DECLARE_FUNCTION(execGetCareerMatchRowData); \
	DECLARE_FUNCTION(execGetCareerMatchSetting); \
	DECLARE_FUNCTION(execGetCareerMenuAnimation); \
	DECLARE_FUNCTION(execGetCareerMiniGameRowData); \
	DECLARE_FUNCTION(execGetCareerMovieSceneManager); \
	DECLARE_FUNCTION(execGetCareerOtherMenuManager); \
	DECLARE_FUNCTION(execGetCareerSchedule); \
	DECLARE_FUNCTION(execGetCareerScheduleData); \
	DECLARE_FUNCTION(execGetCareerScriptManager); \
	DECLARE_FUNCTION(execGetCareerSkillManager); \
	DECLARE_FUNCTION(execGetCareerSquareManager); \
	DECLARE_FUNCTION(execGetCareerStateManager); \
	DECLARE_FUNCTION(execGetCareerStoryCardLottery); \
	DECLARE_FUNCTION(execGetCareerStoryDataActor); \
	DECLARE_FUNCTION(execGetCareerTutorialData); \
	DECLARE_FUNCTION(execGetCareerVehicleActor); \
	DECLARE_FUNCTION(execGetCutSceneCast); \
	DECLARE_FUNCTION(execGetCutSceneTarget); \
	DECLARE_FUNCTION(execGetEventCAWHeightConvertData); \
	DECLARE_FUNCTION(execGetEventMessageNameFromEventData); \
	DECLARE_FUNCTION(execGetEventResultFromEventMessageData); \
	DECLARE_FUNCTION(execGetEventSceneReplaceAnimationData); \
	DECLARE_FUNCTION(execGetLevelTargetPoint); \
	DECLARE_FUNCTION(execGetNextEventMessageNameFromEventMessageData); \
	DECLARE_FUNCTION(execGetPlayerSelectFromEventMessageData); \
	DECLARE_FUNCTION(execGetPlayerSelectResultFromEventMessageData); \
	DECLARE_FUNCTION(execGetRingObject); \
	DECLARE_FUNCTION(execGetStageType); \
	DECLARE_FUNCTION(execIncrementActionCounter); \
	DECLARE_FUNCTION(execIsCreateWidgetFromLevelInfo); \
	DECLARE_FUNCTION(execIsSkipFadeOutCareerMap); \
	DECLARE_FUNCTION(execIsSnapShotEvent); \
	DECLARE_FUNCTION(execJudgeTransitionBranch); \
	DECLARE_FUNCTION(execLoadCareerSaveParam); \
	DECLARE_FUNCTION(execParseMessageString); \
	DECLARE_FUNCTION(execRequestCareerMenuAnimation); \
	DECLARE_FUNCTION(execSearchLevelTargetPoint); \
	DECLARE_FUNCTION(execSetActionInfoCounter); \
	DECLARE_FUNCTION(execSetActionInfoList); \
	DECLARE_FUNCTION(execSetCareerAffectMatchInjury); \
	DECLARE_FUNCTION(execSetCareerAffectMatchMotivation); \
	DECLARE_FUNCTION(execSetCareerAssetLoad); \
	DECLARE_FUNCTION(execSetCareerBalanceAdjustParam); \
	DECLARE_FUNCTION(execSetCareerCameraManager); \
	DECLARE_FUNCTION(execSetCareerCameraPawn); \
	DECLARE_FUNCTION(execSetCareerChameleon); \
	DECLARE_FUNCTION(execSetCareerCutSceneManager); \
	DECLARE_FUNCTION(execSetCareerCutSceneUtilityBase); \
	DECLARE_FUNCTION(execSetCareerDebugInfoWidget); \
	DECLARE_FUNCTION(execSetCareerEditWrestlerParam); \
	DECLARE_FUNCTION(execSetCareerEventSceneManager); \
	DECLARE_FUNCTION(execSetCareerItemManager); \
	DECLARE_FUNCTION(execSetCareerLayoutSceneManager); \
	DECLARE_FUNCTION(execSetCareerMatchResultInfo); \
	DECLARE_FUNCTION(execSetCareerMatchSetting); \
	DECLARE_FUNCTION(execSetCareerMovieSceneManager); \
	DECLARE_FUNCTION(execSetCareerOtherMenuManager); \
	DECLARE_FUNCTION(execSetCareerSchedule); \
	DECLARE_FUNCTION(execSetCareerSkillManager); \
	DECLARE_FUNCTION(execSetCareerSquareManager); \
	DECLARE_FUNCTION(execSetCareerStateManager); \
	DECLARE_FUNCTION(execSetCareerStoryCardLottery); \
	DECLARE_FUNCTION(execSetCareerStoryDataActor); \
	DECLARE_FUNCTION(execSetCareerVehicleActor); \
	DECLARE_FUNCTION(execSetCutSceneCast); \
	DECLARE_FUNCTION(execSetCutSceneTarget); \
	DECLARE_FUNCTION(execSetDataTable_CareerBGM); \
	DECLARE_FUNCTION(execSetDataTable_CareerCutSceneParam); \
	DECLARE_FUNCTION(execSetDataTable_CareerDining); \
	DECLARE_FUNCTION(execSetDataTable_CareerEventSceneList); \
	DECLARE_FUNCTION(execSetDataTable_CareerEventSceneMessage); \
	DECLARE_FUNCTION(execSetDataTable_CareerEventSceneText); \
	DECLARE_FUNCTION(execSetDataTable_CareerEventText); \
	DECLARE_FUNCTION(execSetDataTable_CareerItemText); \
	DECLARE_FUNCTION(execSetDataTable_CareerMatchSummary); \
	DECLARE_FUNCTION(execSetDataTable_CareerMenuText); \
	DECLARE_FUNCTION(execSetDataTable_CareerMiniGameSummary); \
	DECLARE_FUNCTION(execSetDataTable_CareerMovieSceneParam); \
	DECLARE_FUNCTION(execSetDataTable_CareerScriptProbability); \
	DECLARE_FUNCTION(execSetDataTable_CareerSE); \
	DECLARE_FUNCTION(execSetDataTable_CareerSkillText); \
	DECLARE_FUNCTION(execSetHiddenExtraLight); \
	DECLARE_FUNCTION(execSetupEventActionInfo); \
	DECLARE_FUNCTION(execSetupEventBaseInfo); \
	DECLARE_FUNCTION(execSpawnExtraLight);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCareerCAWHeightConvertData); \
	DECLARE_FUNCTION(execAddCareerEventArenaLocationData); \
	DECLARE_FUNCTION(execAddCareerEventBackStageLocationData); \
	DECLARE_FUNCTION(execAddCareerEventSceneReplaceAnimationData); \
	DECLARE_FUNCTION(execAddCareerScheduleData); \
	DECLARE_FUNCTION(execAddCareerTutorialData); \
	DECLARE_FUNCTION(execCheckSnapShotEvent); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetChoiceSelectKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetChoiceSelectStringKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetChoiceTitleKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetChoiceTitleStringKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetPersonality); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetTalkKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetTalkStringKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetTitleKey); \
	DECLARE_FUNCTION(execDebugMenu_EventScene_SetTitleStringKey); \
	DECLARE_FUNCTION(execGetActionInfo); \
	DECLARE_FUNCTION(execGetActionInfoCounter); \
	DECLARE_FUNCTION(execGetActionInfoList); \
	DECLARE_FUNCTION(execGetActionInfoTextID); \
	DECLARE_FUNCTION(execGetAreaTargetPoint); \
	DECLARE_FUNCTION(execGetArenaLocation); \
	DECLARE_FUNCTION(execGetBackStageLocation); \
	DECLARE_FUNCTION(execGetBackStageSubLevelUtility); \
	DECLARE_FUNCTION(execGetBaseInfo); \
	DECLARE_FUNCTION(execGetCareerAffectMatchInjury); \
	DECLARE_FUNCTION(execGetCareerAffectMatchMotivation); \
	DECLARE_FUNCTION(execGetCareerAssetLoad); \
	DECLARE_FUNCTION(execGetCareerBalanceAdjustParam); \
	DECLARE_FUNCTION(execGetCareerCameraManager); \
	DECLARE_FUNCTION(execGetCareerCameraPawn); \
	DECLARE_FUNCTION(execGetCareerChameleon); \
	DECLARE_FUNCTION(execGetCareerCutSceneManager); \
	DECLARE_FUNCTION(execGetCareerCutsceneParamRowData); \
	DECLARE_FUNCTION(execGetCareerCutSceneUtilityBase); \
	DECLARE_FUNCTION(execGetCareerDiningInfoFromDataTable); \
	DECLARE_FUNCTION(execGetCareerEditWrestlerParam); \
	DECLARE_FUNCTION(execGetCareerEventMessageRowData); \
	DECLARE_FUNCTION(execGetCareerEventRowData); \
	DECLARE_FUNCTION(execGetCareerEventSceneManager); \
	DECLARE_FUNCTION(execGetCareerEventTextRowData); \
	DECLARE_FUNCTION(execGetCareerItemManager); \
	DECLARE_FUNCTION(execGetCareerLayoutSceneManager); \
	DECLARE_FUNCTION(execGetCareerMatchRowData); \
	DECLARE_FUNCTION(execGetCareerMatchSetting); \
	DECLARE_FUNCTION(execGetCareerMenuAnimation); \
	DECLARE_FUNCTION(execGetCareerMiniGameRowData); \
	DECLARE_FUNCTION(execGetCareerMovieSceneManager); \
	DECLARE_FUNCTION(execGetCareerOtherMenuManager); \
	DECLARE_FUNCTION(execGetCareerSchedule); \
	DECLARE_FUNCTION(execGetCareerScheduleData); \
	DECLARE_FUNCTION(execGetCareerScriptManager); \
	DECLARE_FUNCTION(execGetCareerSkillManager); \
	DECLARE_FUNCTION(execGetCareerSquareManager); \
	DECLARE_FUNCTION(execGetCareerStateManager); \
	DECLARE_FUNCTION(execGetCareerStoryCardLottery); \
	DECLARE_FUNCTION(execGetCareerStoryDataActor); \
	DECLARE_FUNCTION(execGetCareerTutorialData); \
	DECLARE_FUNCTION(execGetCareerVehicleActor); \
	DECLARE_FUNCTION(execGetCutSceneCast); \
	DECLARE_FUNCTION(execGetCutSceneTarget); \
	DECLARE_FUNCTION(execGetEventCAWHeightConvertData); \
	DECLARE_FUNCTION(execGetEventMessageNameFromEventData); \
	DECLARE_FUNCTION(execGetEventResultFromEventMessageData); \
	DECLARE_FUNCTION(execGetEventSceneReplaceAnimationData); \
	DECLARE_FUNCTION(execGetLevelTargetPoint); \
	DECLARE_FUNCTION(execGetNextEventMessageNameFromEventMessageData); \
	DECLARE_FUNCTION(execGetPlayerSelectFromEventMessageData); \
	DECLARE_FUNCTION(execGetPlayerSelectResultFromEventMessageData); \
	DECLARE_FUNCTION(execGetRingObject); \
	DECLARE_FUNCTION(execGetStageType); \
	DECLARE_FUNCTION(execIncrementActionCounter); \
	DECLARE_FUNCTION(execIsCreateWidgetFromLevelInfo); \
	DECLARE_FUNCTION(execIsSkipFadeOutCareerMap); \
	DECLARE_FUNCTION(execIsSnapShotEvent); \
	DECLARE_FUNCTION(execJudgeTransitionBranch); \
	DECLARE_FUNCTION(execLoadCareerSaveParam); \
	DECLARE_FUNCTION(execParseMessageString); \
	DECLARE_FUNCTION(execRequestCareerMenuAnimation); \
	DECLARE_FUNCTION(execSearchLevelTargetPoint); \
	DECLARE_FUNCTION(execSetActionInfoCounter); \
	DECLARE_FUNCTION(execSetActionInfoList); \
	DECLARE_FUNCTION(execSetCareerAffectMatchInjury); \
	DECLARE_FUNCTION(execSetCareerAffectMatchMotivation); \
	DECLARE_FUNCTION(execSetCareerAssetLoad); \
	DECLARE_FUNCTION(execSetCareerBalanceAdjustParam); \
	DECLARE_FUNCTION(execSetCareerCameraManager); \
	DECLARE_FUNCTION(execSetCareerCameraPawn); \
	DECLARE_FUNCTION(execSetCareerChameleon); \
	DECLARE_FUNCTION(execSetCareerCutSceneManager); \
	DECLARE_FUNCTION(execSetCareerCutSceneUtilityBase); \
	DECLARE_FUNCTION(execSetCareerDebugInfoWidget); \
	DECLARE_FUNCTION(execSetCareerEditWrestlerParam); \
	DECLARE_FUNCTION(execSetCareerEventSceneManager); \
	DECLARE_FUNCTION(execSetCareerItemManager); \
	DECLARE_FUNCTION(execSetCareerLayoutSceneManager); \
	DECLARE_FUNCTION(execSetCareerMatchResultInfo); \
	DECLARE_FUNCTION(execSetCareerMatchSetting); \
	DECLARE_FUNCTION(execSetCareerMovieSceneManager); \
	DECLARE_FUNCTION(execSetCareerOtherMenuManager); \
	DECLARE_FUNCTION(execSetCareerSchedule); \
	DECLARE_FUNCTION(execSetCareerSkillManager); \
	DECLARE_FUNCTION(execSetCareerSquareManager); \
	DECLARE_FUNCTION(execSetCareerStateManager); \
	DECLARE_FUNCTION(execSetCareerStoryCardLottery); \
	DECLARE_FUNCTION(execSetCareerStoryDataActor); \
	DECLARE_FUNCTION(execSetCareerVehicleActor); \
	DECLARE_FUNCTION(execSetCutSceneCast); \
	DECLARE_FUNCTION(execSetCutSceneTarget); \
	DECLARE_FUNCTION(execSetDataTable_CareerBGM); \
	DECLARE_FUNCTION(execSetDataTable_CareerCutSceneParam); \
	DECLARE_FUNCTION(execSetDataTable_CareerDining); \
	DECLARE_FUNCTION(execSetDataTable_CareerEventSceneList); \
	DECLARE_FUNCTION(execSetDataTable_CareerEventSceneMessage); \
	DECLARE_FUNCTION(execSetDataTable_CareerEventSceneText); \
	DECLARE_FUNCTION(execSetDataTable_CareerEventText); \
	DECLARE_FUNCTION(execSetDataTable_CareerItemText); \
	DECLARE_FUNCTION(execSetDataTable_CareerMatchSummary); \
	DECLARE_FUNCTION(execSetDataTable_CareerMenuText); \
	DECLARE_FUNCTION(execSetDataTable_CareerMiniGameSummary); \
	DECLARE_FUNCTION(execSetDataTable_CareerMovieSceneParam); \
	DECLARE_FUNCTION(execSetDataTable_CareerScriptProbability); \
	DECLARE_FUNCTION(execSetDataTable_CareerSE); \
	DECLARE_FUNCTION(execSetDataTable_CareerSkillText); \
	DECLARE_FUNCTION(execSetHiddenExtraLight); \
	DECLARE_FUNCTION(execSetupEventActionInfo); \
	DECLARE_FUNCTION(execSetupEventBaseInfo); \
	DECLARE_FUNCTION(execSpawnExtraLight);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_EVENT_PARMS \
	struct ELGameModeCareerBase_eventEventChangeLightScenario_Parms \
	{ \
		ECareerMapLightScenario eLightScenario; \
	}; \
	struct ELGameModeCareerBase_eventEventDispLoadingIcon_Parms \
	{ \
		bool bDisplay; \
	}; \
	struct ELGameModeCareerBase_eventGetBGMCueName_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct ELGameModeCareerBase_eventGetUseStringTable_Parms \
	{ \
		ECareerStringTable UseStringTable; \
		FName ReturnValue; \
	}; \
	struct ELGameModeCareerBase_eventPlayCareerBGM_Parms \
	{ \
		ECareerBGMType _BGMType; \
	}; \
	struct ELGameModeCareerBase_eventPlayCareerSE_Parms \
	{ \
		ECareerSEType _SEType; \
	}; \
	struct ELGameModeCareerBase_eventPlayCareerSE_ReturnSfxID_Parms \
	{ \
		ECareerSEType _SEType; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameModeCareerBase_eventPlayCareerSE_ReturnSfxID_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELGameModeCareerBase_eventPlayELInGameHUD_Parms \
	{ \
		bool _Enable; \
		ECareerInGameHUDType _HUDType; \
	}; \
	struct ELGameModeCareerBase_eventPlayTransitionFade_Parms \
	{ \
		bool bFadeIn; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameModeCareerBase_eventPlayTransitionFade_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELGameModeCareerBase_eventSetupMyWrestlerUpdate_Parms \
	{ \
		ECareerSetupMyWrestlerUpdate eUpdate; \
	}; \
	struct ELGameModeCareerBase_eventSetupNewCareerGameParam_Parms \
	{ \
		EWrestlerID_N _WrestlerID; \
		int32 _SlotIndex; \
	}; \
	struct ELGameModeCareerBase_eventSwitchCareerMapObject_Parms \
	{ \
		bool bEnable; \
	}; \
	struct ELGameModeCareerBase_eventTakeSnapshot_Parms \
	{ \
		UCareerSnapshot* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameModeCareerBase_eventTakeSnapshot_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELGameModeCareerBase_eventTakeSnapshotCaputureFrameBuffer_Parms \
	{ \
		UCareerSnapshot* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameModeCareerBase_eventTakeSnapshotCaputureFrameBuffer_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELGameModeCareerBase(); \
	friend struct Z_Construct_UClass_AELGameModeCareerBase_Statics; \
public: \
	DECLARE_CLASS(AELGameModeCareerBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELGameModeCareerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_INCLASS \
private: \
	static void StaticRegisterNativesAELGameModeCareerBase(); \
	friend struct Z_Construct_UClass_AELGameModeCareerBase_Statics; \
public: \
	DECLARE_CLASS(AELGameModeCareerBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELGameModeCareerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELGameModeCareerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELGameModeCareerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameModeCareerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameModeCareerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameModeCareerBase(AELGameModeCareerBase&&); \
	NO_API AELGameModeCareerBase(const AELGameModeCareerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameModeCareerBase(AELGameModeCareerBase&&); \
	NO_API AELGameModeCareerBase(const AELGameModeCareerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameModeCareerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameModeCareerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELGameModeCareerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_LevelTargetPoint() { return STRUCT_OFFSET(AELGameModeCareerBase, m_LevelTargetPoint); } \
	FORCEINLINE static uint32 __PPO__m_pExtraLight() { return STRUCT_OFFSET(AELGameModeCareerBase, m_pExtraLight); } \
	FORCEINLINE static uint32 __PPO__m_CareerScheduleTable() { return STRUCT_OFFSET(AELGameModeCareerBase, m_CareerScheduleTable); } \
	FORCEINLINE static uint32 __PPO__m_CareerEventBackStageLocation() { return STRUCT_OFFSET(AELGameModeCareerBase, m_CareerEventBackStageLocation); } \
	FORCEINLINE static uint32 __PPO__m_CareerEventArenaLocation() { return STRUCT_OFFSET(AELGameModeCareerBase, m_CareerEventArenaLocation); } \
	FORCEINLINE static uint32 __PPO__m_EventBaseInfo() { return STRUCT_OFFSET(AELGameModeCareerBase, m_EventBaseInfo); } \
	FORCEINLINE static uint32 __PPO__m_ActionInfoList() { return STRUCT_OFFSET(AELGameModeCareerBase, m_ActionInfoList); } \
	FORCEINLINE static uint32 __PPO__m_ActionInfoCounter() { return STRUCT_OFFSET(AELGameModeCareerBase, m_ActionInfoCounter); } \
	FORCEINLINE static uint32 __PPO__m_pCareerScriptManager() { return STRUCT_OFFSET(AELGameModeCareerBase, m_pCareerScriptManager); } \
	FORCEINLINE static uint32 __PPO__m_pCareerDebugInfoWidget() { return STRUCT_OFFSET(AELGameModeCareerBase, m_pCareerDebugInfoWidget); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_66_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELGameModeCareerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGameModeCareerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
