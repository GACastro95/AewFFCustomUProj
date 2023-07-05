// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerPostCommandEventList;
enum class ECareerChoicesPattern : uint8;
struct FCareerChampionshipHolder;
enum class EWrestlerID_N : uint8;
enum class ECareerModeDifficulty : uint8;
struct FCareerStoryCard;
enum class ECareerCity : uint8;
struct FCareerPlayerItemInfo;
struct FCareerRecordInfo;
class UMyWrestlerDataObject;
enum class ECareerScenarioPart : uint8;
struct FGuid;
enum class EPersonalityType : uint8;
enum class ECareerScenario : uint8;
class UELCareerGameParam;
#ifdef ABP_200508_SaveDataObject_CareerMode_generated_h
#error "SaveDataObject_CareerMode.generated.h already included, missing '#pragma once' in SaveDataObject_CareerMode.h"
#endif
#define ABP_200508_SaveDataObject_CareerMode_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCareerPostCommandEventList); \
	DECLARE_FUNCTION(execAddChoicesSelectResult); \
	DECLARE_FUNCTION(execGetCareerbInjury); \
	DECLARE_FUNCTION(execGetCareerChampionship); \
	DECLARE_FUNCTION(execGetCareerCondition); \
	DECLARE_FUNCTION(execGetCareerCurrentTurn); \
	DECLARE_FUNCTION(execGetCareerCurrentWeek); \
	DECLARE_FUNCTION(execGetCareerDateId); \
	DECLARE_FUNCTION(execGetCareerDifficulty); \
	DECLARE_FUNCTION(execGetCareerDispSubtitles); \
	DECLARE_FUNCTION(execGetCareerDispTutorialDialog); \
	DECLARE_FUNCTION(execGetCareerLongStoryCard); \
	DECLARE_FUNCTION(execGetCareerMatchVenue); \
	DECLARE_FUNCTION(execGetCareerMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execGetCareerMoney); \
	DECLARE_FUNCTION(execGetCareerMotivation); \
	DECLARE_FUNCTION(execGetCareerNextStoryKey); \
	DECLARE_FUNCTION(execGetCareerPertnerId); \
	DECLARE_FUNCTION(execGetCareerPlayDarkMatch); \
	DECLARE_FUNCTION(execGetCareerPlayerItemInfo); \
	DECLARE_FUNCTION(execGetCareerPostCommandEventList); \
	DECLARE_FUNCTION(execGetCareerPresetNo); \
	DECLARE_FUNCTION(execGetCareerRecordInfoLocal); \
	DECLARE_FUNCTION(execGetCareerRecordInfoTotal); \
	DECLARE_FUNCTION(execGetCareerRivalId); \
	DECLARE_FUNCTION(execGetCareerRoster); \
	DECLARE_FUNCTION(execGetCareerScenarioPart); \
	DECLARE_FUNCTION(execGetCareerScout); \
	DECLARE_FUNCTION(execGetCareerSkillPoint); \
	DECLARE_FUNCTION(execGetCareerTotalScenarioTurn); \
	DECLARE_FUNCTION(execGetCareerTurnMax); \
	DECLARE_FUNCTION(execGetCareerTutorialUseFlag); \
	DECLARE_FUNCTION(execGetCareerUnlockDark); \
	DECLARE_FUNCTION(execGetCareerUnlockRampage); \
	DECLARE_FUNCTION(execGetCareerUseTurnEnding); \
	DECLARE_FUNCTION(execGetCareerVegetarian); \
	DECLARE_FUNCTION(execGetCareerWrestlerClearCount); \
	DECLARE_FUNCTION(execGetCareerWrestlerGUID); \
	DECLARE_FUNCTION(execGetCareerWrestlerId); \
	DECLARE_FUNCTION(execGetCareerWrestlerPersonality); \
	DECLARE_FUNCTION(execGetCareeScenario); \
	DECLARE_FUNCTION(execGetChoicesSelectResult); \
	DECLARE_FUNCTION(execIsNewGameSaveData); \
	DECLARE_FUNCTION(execIsValidContinueData); \
	DECLARE_FUNCTION(execReadDataToMyRoster); \
	DECLARE_FUNCTION(execReadDataToMyScout); \
	DECLARE_FUNCTION(execSetCareerbInjury); \
	DECLARE_FUNCTION(execSetCareerChampionship); \
	DECLARE_FUNCTION(execSetCareerCondition); \
	DECLARE_FUNCTION(execSetCareerCurrentTurn); \
	DECLARE_FUNCTION(execSetCareerCurrentWeek); \
	DECLARE_FUNCTION(execSetCareerDateId); \
	DECLARE_FUNCTION(execSetCareerDifficulty); \
	DECLARE_FUNCTION(execSetCareerDispSubtitles); \
	DECLARE_FUNCTION(execSetCareerDispTutorialDialog); \
	DECLARE_FUNCTION(execSetCareerGameParamToSaveData); \
	DECLARE_FUNCTION(execSetCareerLongStoryCard); \
	DECLARE_FUNCTION(execSetCareerMatchVenue); \
	DECLARE_FUNCTION(execSetCareerMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execSetCareerMoney); \
	DECLARE_FUNCTION(execSetCareerMotivation); \
	DECLARE_FUNCTION(execSetCareerNextStoryKey); \
	DECLARE_FUNCTION(execSetCareerPertnerId); \
	DECLARE_FUNCTION(execSetCareerPlayDarkMatch); \
	DECLARE_FUNCTION(execSetCareerPlayerItemInfo); \
	DECLARE_FUNCTION(execSetCareerPresetNo); \
	DECLARE_FUNCTION(execSetCareerRecordInfoLocal); \
	DECLARE_FUNCTION(execSetCareerRecordInfoTotal); \
	DECLARE_FUNCTION(execSetCareerRivalId); \
	DECLARE_FUNCTION(execSetCareerRoster); \
	DECLARE_FUNCTION(execSetCareerScenario); \
	DECLARE_FUNCTION(execSetCareerScenarioPart); \
	DECLARE_FUNCTION(execSetCareerScout); \
	DECLARE_FUNCTION(execSetCareerSkillPoint); \
	DECLARE_FUNCTION(execSetCareerTotalScenarioTurn); \
	DECLARE_FUNCTION(execSetCareerTurnMax); \
	DECLARE_FUNCTION(execSetCareerTutorialUseFlag); \
	DECLARE_FUNCTION(execSetCareerUnlockDark); \
	DECLARE_FUNCTION(execSetCareerUnlockRampage); \
	DECLARE_FUNCTION(execSetCareerUseTurnEnding); \
	DECLARE_FUNCTION(execSetCareerVegetarian); \
	DECLARE_FUNCTION(execSetCareerWrestlerClearCount); \
	DECLARE_FUNCTION(execSetCareerWrestlerGUID); \
	DECLARE_FUNCTION(execSetCareerWrestlerId); \
	DECLARE_FUNCTION(execSetCareerWrestlerPersonality); \
	DECLARE_FUNCTION(execSetNewGameSaveData); \
	DECLARE_FUNCTION(execSetSaveDataToCareerGameParam); \
	DECLARE_FUNCTION(execSetValidContinueData); \
	DECLARE_FUNCTION(execWriteDataFromMyRoster); \
	DECLARE_FUNCTION(execWriteDataFromMyScout);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCareerPostCommandEventList); \
	DECLARE_FUNCTION(execAddChoicesSelectResult); \
	DECLARE_FUNCTION(execGetCareerbInjury); \
	DECLARE_FUNCTION(execGetCareerChampionship); \
	DECLARE_FUNCTION(execGetCareerCondition); \
	DECLARE_FUNCTION(execGetCareerCurrentTurn); \
	DECLARE_FUNCTION(execGetCareerCurrentWeek); \
	DECLARE_FUNCTION(execGetCareerDateId); \
	DECLARE_FUNCTION(execGetCareerDifficulty); \
	DECLARE_FUNCTION(execGetCareerDispSubtitles); \
	DECLARE_FUNCTION(execGetCareerDispTutorialDialog); \
	DECLARE_FUNCTION(execGetCareerLongStoryCard); \
	DECLARE_FUNCTION(execGetCareerMatchVenue); \
	DECLARE_FUNCTION(execGetCareerMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execGetCareerMoney); \
	DECLARE_FUNCTION(execGetCareerMotivation); \
	DECLARE_FUNCTION(execGetCareerNextStoryKey); \
	DECLARE_FUNCTION(execGetCareerPertnerId); \
	DECLARE_FUNCTION(execGetCareerPlayDarkMatch); \
	DECLARE_FUNCTION(execGetCareerPlayerItemInfo); \
	DECLARE_FUNCTION(execGetCareerPostCommandEventList); \
	DECLARE_FUNCTION(execGetCareerPresetNo); \
	DECLARE_FUNCTION(execGetCareerRecordInfoLocal); \
	DECLARE_FUNCTION(execGetCareerRecordInfoTotal); \
	DECLARE_FUNCTION(execGetCareerRivalId); \
	DECLARE_FUNCTION(execGetCareerRoster); \
	DECLARE_FUNCTION(execGetCareerScenarioPart); \
	DECLARE_FUNCTION(execGetCareerScout); \
	DECLARE_FUNCTION(execGetCareerSkillPoint); \
	DECLARE_FUNCTION(execGetCareerTotalScenarioTurn); \
	DECLARE_FUNCTION(execGetCareerTurnMax); \
	DECLARE_FUNCTION(execGetCareerTutorialUseFlag); \
	DECLARE_FUNCTION(execGetCareerUnlockDark); \
	DECLARE_FUNCTION(execGetCareerUnlockRampage); \
	DECLARE_FUNCTION(execGetCareerUseTurnEnding); \
	DECLARE_FUNCTION(execGetCareerVegetarian); \
	DECLARE_FUNCTION(execGetCareerWrestlerClearCount); \
	DECLARE_FUNCTION(execGetCareerWrestlerGUID); \
	DECLARE_FUNCTION(execGetCareerWrestlerId); \
	DECLARE_FUNCTION(execGetCareerWrestlerPersonality); \
	DECLARE_FUNCTION(execGetCareeScenario); \
	DECLARE_FUNCTION(execGetChoicesSelectResult); \
	DECLARE_FUNCTION(execIsNewGameSaveData); \
	DECLARE_FUNCTION(execIsValidContinueData); \
	DECLARE_FUNCTION(execReadDataToMyRoster); \
	DECLARE_FUNCTION(execReadDataToMyScout); \
	DECLARE_FUNCTION(execSetCareerbInjury); \
	DECLARE_FUNCTION(execSetCareerChampionship); \
	DECLARE_FUNCTION(execSetCareerCondition); \
	DECLARE_FUNCTION(execSetCareerCurrentTurn); \
	DECLARE_FUNCTION(execSetCareerCurrentWeek); \
	DECLARE_FUNCTION(execSetCareerDateId); \
	DECLARE_FUNCTION(execSetCareerDifficulty); \
	DECLARE_FUNCTION(execSetCareerDispSubtitles); \
	DECLARE_FUNCTION(execSetCareerDispTutorialDialog); \
	DECLARE_FUNCTION(execSetCareerGameParamToSaveData); \
	DECLARE_FUNCTION(execSetCareerLongStoryCard); \
	DECLARE_FUNCTION(execSetCareerMatchVenue); \
	DECLARE_FUNCTION(execSetCareerMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execSetCareerMoney); \
	DECLARE_FUNCTION(execSetCareerMotivation); \
	DECLARE_FUNCTION(execSetCareerNextStoryKey); \
	DECLARE_FUNCTION(execSetCareerPertnerId); \
	DECLARE_FUNCTION(execSetCareerPlayDarkMatch); \
	DECLARE_FUNCTION(execSetCareerPlayerItemInfo); \
	DECLARE_FUNCTION(execSetCareerPresetNo); \
	DECLARE_FUNCTION(execSetCareerRecordInfoLocal); \
	DECLARE_FUNCTION(execSetCareerRecordInfoTotal); \
	DECLARE_FUNCTION(execSetCareerRivalId); \
	DECLARE_FUNCTION(execSetCareerRoster); \
	DECLARE_FUNCTION(execSetCareerScenario); \
	DECLARE_FUNCTION(execSetCareerScenarioPart); \
	DECLARE_FUNCTION(execSetCareerScout); \
	DECLARE_FUNCTION(execSetCareerSkillPoint); \
	DECLARE_FUNCTION(execSetCareerTotalScenarioTurn); \
	DECLARE_FUNCTION(execSetCareerTurnMax); \
	DECLARE_FUNCTION(execSetCareerTutorialUseFlag); \
	DECLARE_FUNCTION(execSetCareerUnlockDark); \
	DECLARE_FUNCTION(execSetCareerUnlockRampage); \
	DECLARE_FUNCTION(execSetCareerUseTurnEnding); \
	DECLARE_FUNCTION(execSetCareerVegetarian); \
	DECLARE_FUNCTION(execSetCareerWrestlerClearCount); \
	DECLARE_FUNCTION(execSetCareerWrestlerGUID); \
	DECLARE_FUNCTION(execSetCareerWrestlerId); \
	DECLARE_FUNCTION(execSetCareerWrestlerPersonality); \
	DECLARE_FUNCTION(execSetNewGameSaveData); \
	DECLARE_FUNCTION(execSetSaveDataToCareerGameParam); \
	DECLARE_FUNCTION(execSetValidContinueData); \
	DECLARE_FUNCTION(execWriteDataFromMyRoster); \
	DECLARE_FUNCTION(execWriteDataFromMyScout);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataObject_CareerMode(); \
	friend struct Z_Construct_UClass_USaveDataObject_CareerMode_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_CareerMode, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_CareerMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataObject_CareerMode(); \
	friend struct Z_Construct_UClass_USaveDataObject_CareerMode_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_CareerMode, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_CareerMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataObject_CareerMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataObject_CareerMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_CareerMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_CareerMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_CareerMode(USaveDataObject_CareerMode&&); \
	NO_API USaveDataObject_CareerMode(const USaveDataObject_CareerMode&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_CareerMode(USaveDataObject_CareerMode&&); \
	NO_API USaveDataObject_CareerMode(const USaveDataObject_CareerMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_CareerMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_CareerMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataObject_CareerMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_22_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveDataObject_CareerMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_CareerMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
