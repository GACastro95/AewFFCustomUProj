// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ECareerStoryCardRegularReward : uint8;
enum class EWrestlerID_N : uint8;
enum class ECareerAttireType : uint8;
class UDataTable;
struct FCareerRecordInfo;
enum class ECareerCheckMaxValue : uint8;
enum class ECareerTutorialDispTiming : uint8;
struct FCareerTutorial;
enum class ECareerBGMType : uint8;
enum class ECareerSEType : uint8;
enum class EPersonalityType : uint8;
enum class ECareerTextMode : uint8;
enum class EGender : uint8;
enum class ECareerLevelInfo : uint8;
struct FCareerPlayData;
enum class ECareerRecordsInfo : uint8;
enum class ECareerScenario : uint8;
class UMyWrestlerDataObject;
enum class ECareerPostCommandEventType : uint8;
struct FCareerPostCommandEventCore;
enum class ECareerPostCommandEventMark : uint8;
enum class ECareerScenarioPart : uint8;
enum class ECareerScenarioMatchTiming : uint8;
enum class ECareerScenarioNo : uint8;
enum class ECareerStoryOperationType : uint8;
struct FCareerStoryCard;
struct FCareerStory;
struct FCareerMatchCardCore;
class UELCareerGameParam;
class USceneCaptureComponent2D;
class USkeletalMeshComponent;
enum class ECareerPlayDataInfoType : uint8;
class ASceneCapture2D;
#ifdef ABP_200508_ELCareerUtilityFunction_generated_h
#error "ELCareerUtilityFunction.generated.h already included, missing '#pragma once' in ELCareerUtilityFunction.h"
#endif
#define ABP_200508_ELCareerUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcMatchRewardDifficulity); \
	DECLARE_FUNCTION(execCalcMiniGameRewardDifficulity); \
	DECLARE_FUNCTION(execCanPPV); \
	DECLARE_FUNCTION(execChangeAttire); \
	DECLARE_FUNCTION(execChangeDOFQualityDefault); \
	DECLARE_FUNCTION(execChangeDOFQualityHigh); \
	DECLARE_FUNCTION(execCheckAllUnlcokTShirt); \
	DECLARE_FUNCTION(execCheckExcludeWrestler); \
	DECLARE_FUNCTION(execCheckMaxValueReach); \
	DECLARE_FUNCTION(execClearGlobalCareerParams); \
	DECLARE_FUNCTION(execEditorSaveRequestCareerSnapshot); \
	DECLARE_FUNCTION(execExecRandomFromPercent); \
	DECLARE_FUNCTION(execExecuteTransition); \
	DECLARE_FUNCTION(execExecuteTransitionCareerHUB); \
	DECLARE_FUNCTION(execGetCanUseTutorial); \
	DECLARE_FUNCTION(execGetCareerBGMNo); \
	DECLARE_FUNCTION(execGetCareerEnvironmentSound); \
	DECLARE_FUNCTION(execGetCareerEventKey); \
	DECLARE_FUNCTION(execGetCareerEventSceneText); \
	DECLARE_FUNCTION(execGetCareerEventTalkText); \
	DECLARE_FUNCTION(execGetCareerGameSpeed); \
	DECLARE_FUNCTION(execGetCareerLevelInfo); \
	DECLARE_FUNCTION(execGetCareerMenuText); \
	DECLARE_FUNCTION(execGetCareerNameError); \
	DECLARE_FUNCTION(execGetCareerPlayDataInfo); \
	DECLARE_FUNCTION(execGetCareerPlayerCondition); \
	DECLARE_FUNCTION(execGetCareerRecordsLocalValue); \
	DECLARE_FUNCTION(execGetCareerSENo); \
	DECLARE_FUNCTION(execGetCurrentCareerScenarioID); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberCustomWrestler); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberDining); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberDynamite); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberMedicalA); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberMedicalB); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberMinigame); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberOtherMatchA); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberOtherMatchB); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberOtherMatchC); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberPromotion); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberSaveAndExit); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberSightSeeing); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberSnapshotAlbum); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberTutorial); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberWorkOutHigh); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberWorkOutLow); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberWorkOutMedium); \
	DECLARE_FUNCTION(execGetPlayerGender); \
	DECLARE_FUNCTION(execGetPlayerMyWrestlerDataObject); \
	DECLARE_FUNCTION(execGetPlayerPersonalityType); \
	DECLARE_FUNCTION(execGetPostCommandEventCore); \
	DECLARE_FUNCTION(execGetPostCommandEventMark); \
	DECLARE_FUNCTION(execGetPostCommandEventNumber); \
	DECLARE_FUNCTION(execGetRangeWrestlerID); \
	DECLARE_FUNCTION(execGetScenarioMatchTimingByScenarioPart); \
	DECLARE_FUNCTION(execGetScenarioNoByScenarioPart); \
	DECLARE_FUNCTION(execGetSignedNumberString); \
	DECLARE_FUNCTION(execGetSnapshotMax); \
	DECLARE_FUNCTION(execGetStringByEnum); \
	DECLARE_FUNCTION(execGetStringToNum); \
	DECLARE_FUNCTION(execGetWeekByScenarioPart); \
	DECLARE_FUNCTION(execIsPlayOuting); \
	DECLARE_FUNCTION(execIsSkipQuitMatchProcess); \
	DECLARE_FUNCTION(execIsSnapshotCreateEach); \
	DECLARE_FUNCTION(execIsSnapshotFileDelete); \
	DECLARE_FUNCTION(execIsSnapshotOneFileMultiImage); \
	DECLARE_FUNCTION(execIsTransitionScript); \
	DECLARE_FUNCTION(execIsValidCareerContinueData); \
	DECLARE_FUNCTION(execLotteryDateRival); \
	DECLARE_FUNCTION(execMakeMatchCardByStory); \
	DECLARE_FUNCTION(execMakeMatchCardByStoryCard); \
	DECLARE_FUNCTION(execParseStringWithLinefeed); \
	DECLARE_FUNCTION(execSaveRequestCareerModeData); \
	DECLARE_FUNCTION(execSaveRequestCareerModeSystemData); \
	DECLARE_FUNCTION(execSetCareerGameParamToSaveData); \
	DECLARE_FUNCTION(execSetCareerGameParamToSystemSaveData); \
	DECLARE_FUNCTION(execSetCareerLevelInfo); \
	DECLARE_FUNCTION(execSetNewGameSaveData); \
	DECLARE_FUNCTION(execSetOptimizeSceneCapture2DOption); \
	DECLARE_FUNCTION(execSetRenderTargetSize); \
	DECLARE_FUNCTION(execSetSaveDataToCareerGameParam); \
	DECLARE_FUNCTION(execSetSaveDataToRecordInfoTotal); \
	DECLARE_FUNCTION(execSetSaveDataToWrestlerClearCount); \
	DECLARE_FUNCTION(execSetSystemSaveDataToCareerGameParam); \
	DECLARE_FUNCTION(execSetupCareerSaveData); \
	DECLARE_FUNCTION(execSetupCareerSystemSaveData); \
	DECLARE_FUNCTION(execSetValidCareerContinueData); \
	DECLARE_FUNCTION(execTutorialTemporaryClear); \
	DECLARE_FUNCTION(execUpdateCareerPlayDataInfo); \
	DECLARE_FUNCTION(execUpdateCareerRecordsLocal); \
	DECLARE_FUNCTION(execUpdateCareerRecordsTotal); \
	DECLARE_FUNCTION(execUpdateSceneCapture);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcMatchRewardDifficulity); \
	DECLARE_FUNCTION(execCalcMiniGameRewardDifficulity); \
	DECLARE_FUNCTION(execCanPPV); \
	DECLARE_FUNCTION(execChangeAttire); \
	DECLARE_FUNCTION(execChangeDOFQualityDefault); \
	DECLARE_FUNCTION(execChangeDOFQualityHigh); \
	DECLARE_FUNCTION(execCheckAllUnlcokTShirt); \
	DECLARE_FUNCTION(execCheckExcludeWrestler); \
	DECLARE_FUNCTION(execCheckMaxValueReach); \
	DECLARE_FUNCTION(execClearGlobalCareerParams); \
	DECLARE_FUNCTION(execEditorSaveRequestCareerSnapshot); \
	DECLARE_FUNCTION(execExecRandomFromPercent); \
	DECLARE_FUNCTION(execExecuteTransition); \
	DECLARE_FUNCTION(execExecuteTransitionCareerHUB); \
	DECLARE_FUNCTION(execGetCanUseTutorial); \
	DECLARE_FUNCTION(execGetCareerBGMNo); \
	DECLARE_FUNCTION(execGetCareerEnvironmentSound); \
	DECLARE_FUNCTION(execGetCareerEventKey); \
	DECLARE_FUNCTION(execGetCareerEventSceneText); \
	DECLARE_FUNCTION(execGetCareerEventTalkText); \
	DECLARE_FUNCTION(execGetCareerGameSpeed); \
	DECLARE_FUNCTION(execGetCareerLevelInfo); \
	DECLARE_FUNCTION(execGetCareerMenuText); \
	DECLARE_FUNCTION(execGetCareerNameError); \
	DECLARE_FUNCTION(execGetCareerPlayDataInfo); \
	DECLARE_FUNCTION(execGetCareerPlayerCondition); \
	DECLARE_FUNCTION(execGetCareerRecordsLocalValue); \
	DECLARE_FUNCTION(execGetCareerSENo); \
	DECLARE_FUNCTION(execGetCurrentCareerScenarioID); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberCustomWrestler); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberDining); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberDynamite); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberMedicalA); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberMedicalB); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberMinigame); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberOtherMatchA); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberOtherMatchB); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberOtherMatchC); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberPromotion); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberSaveAndExit); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberSightSeeing); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberSnapshotAlbum); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberTutorial); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberWorkOutHigh); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberWorkOutLow); \
	DECLARE_FUNCTION(execGetMenuNotifyNumberWorkOutMedium); \
	DECLARE_FUNCTION(execGetPlayerGender); \
	DECLARE_FUNCTION(execGetPlayerMyWrestlerDataObject); \
	DECLARE_FUNCTION(execGetPlayerPersonalityType); \
	DECLARE_FUNCTION(execGetPostCommandEventCore); \
	DECLARE_FUNCTION(execGetPostCommandEventMark); \
	DECLARE_FUNCTION(execGetPostCommandEventNumber); \
	DECLARE_FUNCTION(execGetRangeWrestlerID); \
	DECLARE_FUNCTION(execGetScenarioMatchTimingByScenarioPart); \
	DECLARE_FUNCTION(execGetScenarioNoByScenarioPart); \
	DECLARE_FUNCTION(execGetSignedNumberString); \
	DECLARE_FUNCTION(execGetSnapshotMax); \
	DECLARE_FUNCTION(execGetStringByEnum); \
	DECLARE_FUNCTION(execGetStringToNum); \
	DECLARE_FUNCTION(execGetWeekByScenarioPart); \
	DECLARE_FUNCTION(execIsPlayOuting); \
	DECLARE_FUNCTION(execIsSkipQuitMatchProcess); \
	DECLARE_FUNCTION(execIsSnapshotCreateEach); \
	DECLARE_FUNCTION(execIsSnapshotFileDelete); \
	DECLARE_FUNCTION(execIsSnapshotOneFileMultiImage); \
	DECLARE_FUNCTION(execIsTransitionScript); \
	DECLARE_FUNCTION(execIsValidCareerContinueData); \
	DECLARE_FUNCTION(execLotteryDateRival); \
	DECLARE_FUNCTION(execMakeMatchCardByStory); \
	DECLARE_FUNCTION(execMakeMatchCardByStoryCard); \
	DECLARE_FUNCTION(execParseStringWithLinefeed); \
	DECLARE_FUNCTION(execSaveRequestCareerModeData); \
	DECLARE_FUNCTION(execSaveRequestCareerModeSystemData); \
	DECLARE_FUNCTION(execSetCareerGameParamToSaveData); \
	DECLARE_FUNCTION(execSetCareerGameParamToSystemSaveData); \
	DECLARE_FUNCTION(execSetCareerLevelInfo); \
	DECLARE_FUNCTION(execSetNewGameSaveData); \
	DECLARE_FUNCTION(execSetOptimizeSceneCapture2DOption); \
	DECLARE_FUNCTION(execSetRenderTargetSize); \
	DECLARE_FUNCTION(execSetSaveDataToCareerGameParam); \
	DECLARE_FUNCTION(execSetSaveDataToRecordInfoTotal); \
	DECLARE_FUNCTION(execSetSaveDataToWrestlerClearCount); \
	DECLARE_FUNCTION(execSetSystemSaveDataToCareerGameParam); \
	DECLARE_FUNCTION(execSetupCareerSaveData); \
	DECLARE_FUNCTION(execSetupCareerSystemSaveData); \
	DECLARE_FUNCTION(execSetValidCareerContinueData); \
	DECLARE_FUNCTION(execTutorialTemporaryClear); \
	DECLARE_FUNCTION(execUpdateCareerPlayDataInfo); \
	DECLARE_FUNCTION(execUpdateCareerRecordsLocal); \
	DECLARE_FUNCTION(execUpdateCareerRecordsTotal); \
	DECLARE_FUNCTION(execUpdateSceneCapture);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerUtilityFunction(); \
	friend struct Z_Construct_UClass_UELCareerUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELCareerUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerUtilityFunction(); \
	friend struct Z_Construct_UClass_UELCareerUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELCareerUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerUtilityFunction(UELCareerUtilityFunction&&); \
	NO_API UELCareerUtilityFunction(const UELCareerUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerUtilityFunction(UELCareerUtilityFunction&&); \
	NO_API UELCareerUtilityFunction(const UELCareerUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_41_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
