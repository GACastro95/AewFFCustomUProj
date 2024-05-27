#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "EPersonalityType.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CareerMatchCardCore.h"
#include "CareerPlayData.h"
#include "CareerPostCommandEventCore.h"
#include "CareerRecordInfo.h"
#include "CareerStory.h"
#include "CareerStoryCard.h"
#include "CareerTutorial.h"
#include "ECareerAttireType.h"
#include "ECareerBGMType.h"
#include "ECareerCheckMaxValue.h"
#include "ECareerLevelInfo.h"
#include "ECareerPlayDataInfoType.h"
#include "ECareerPostCommandEventMark.h"
#include "ECareerPostCommandEventType.h"
#include "ECareerRecordsInfo.h"
#include "ECareerSEType.h"
#include "ECareerScenario.h"
#include "ECareerScenarioMatchTiming.h"
#include "ECareerScenarioNo.h"
#include "ECareerScenarioPart.h"
#include "ECareerStoryCardRegularReward.h"
#include "ECareerStoryOperationType.h"
#include "ECareerTextMode.h"
#include "ECareerTutorialDispTiming.h"
#include "ELCareerUtilityFunction.generated.h"

class ASceneCapture2D;
class UDataTable;
class UELCareerGameParam;
class UMyWrestlerDataObject;
class UObject;
class USceneCaptureComponent2D;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API UELCareerUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELCareerUtilityFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateSceneCapture(const UObject* WorldContextObject, ASceneCapture2D* pSceneCapture2D);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateCareerRecordsTotal(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateCareerRecordsLocal(const UObject* WorldContextObject, ECareerRecordsInfo RecordsInfo, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateCareerPlayDataInfo(const UObject* WorldContextObject, ECareerPlayDataInfoType MiningType, int32 MiningData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TutorialTemporaryClear(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetValidCareerContinueData(bool _Enable, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetupCareerSystemSaveData();
    
    UFUNCTION(BlueprintCallable)
    static bool SetupCareerSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void SetSystemSaveDataToCareerGameParam(UELCareerGameParam* _careerGameParam, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSaveDataToWrestlerClearCount(UELCareerGameParam* _pCareerGameParam, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSaveDataToRecordInfoTotal(UELCareerGameParam* _pCareerGameParam, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSaveDataToCareerGameParam(UELCareerGameParam* _pCareerGameParam, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetRenderTargetSize(USceneCaptureComponent2D* pSceneCapture2D, USkeletalMeshComponent* pMeshComp, int32 InSizeX, int32 InSizeY, bool bEnabledForceMipStreaming);
    
    UFUNCTION(BlueprintCallable)
    static void SetOptimizeSceneCapture2DOption(USceneCaptureComponent2D* pSceneCapture2D, bool bAtmosphereOnly);
    
    UFUNCTION(BlueprintCallable)
    static void SetNewGameSaveData(bool _create, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCareerLevelInfo(const UObject* WorldContextObject, ECareerLevelInfo ECareerLevelInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetCareerGameParamToSystemSaveData(UELCareerGameParam* _careerGameParam, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCareerGameParamToSaveData(UELCareerGameParam* _careerGameParam, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRequestCareerModeSystemData();
    
    UFUNCTION(BlueprintCallable)
    static void SaveRequestCareerModeData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> ParseStringWithLinefeed(const FString& _String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FCareerMatchCardCore MakeMatchCardByStoryCard(const UObject* WorldContextObject, FCareerStoryCard _StoryCard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FCareerMatchCardCore MakeMatchCardByStory(const UObject* WorldContextObject, FCareerStoryCard _StoryCard, FCareerStory _Story);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EWrestlerID_N LotteryDateRival(const UObject* WorldContextObject, EWrestlerID_N _DateWrestlerID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidCareerContinueData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTransitionScript(ECareerStoryOperationType _OperationType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSnapshotOneFileMultiImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSnapshotFileDelete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSnapshotCreateEach();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSkipQuitMatchProcess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayOuting(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeekByScenarioPart(ECareerScenarioPart ScenarioPart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringToNum(int32 Number);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringByEnum(const FString& EnumDefine, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSnapshotMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSignedNumberString(int32 Number);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECareerScenarioNo GetScenarioNoByScenarioPart(ECareerScenarioPart ScenarioPart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECareerScenarioMatchTiming GetScenarioMatchTimingByScenarioPart(ECareerScenarioPart _ScenarioPart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWrestlerID_N GetRangeWrestlerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPostCommandEventNumber(const UObject* WorldContextObject, ECareerPostCommandEventType eCommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ECareerPostCommandEventMark GetPostCommandEventMark(const UObject* WorldContextObject, ECareerPostCommandEventType eCommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FCareerPostCommandEventCore GetPostCommandEventCore(const UObject* WorldContextObject, ECareerPostCommandEventType eCommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPersonalityType GetPlayerPersonalityType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMyWrestlerDataObject* GetPlayerMyWrestlerDataObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EGender GetPlayerGender(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberWorkOutMedium();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberWorkOutLow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberWorkOutHigh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberSnapshotAlbum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberSightSeeing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberSaveAndExit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberPromotion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberOtherMatchC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberOtherMatchB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberOtherMatchA();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberMinigame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberMedicalB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberMedicalA();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberDynamite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberDining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMenuNotifyNumberCustomWrestler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ECareerScenario GetCurrentCareerScenarioID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCareerSENo(const UObject* WorldContextObject, ECareerSEType _type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCareerRecordsLocalValue(const UObject* WorldContextObject, ECareerRecordsInfo RecordsInfo, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCareerPlayerCondition(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCareerPlayData GetCareerPlayDataInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCareerNameError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetCareerMenuText(const UObject* WorldContextObject, FName DataTableKey, ECareerTextMode Mode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ECareerLevelInfo GetCareerLevelInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetCareerGameSpeed(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetCareerEventTalkText(const UObject* WorldContextObject, FName _key, EPersonalityType _Personality, EGender _Gender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetCareerEventSceneText(const UObject* WorldContextObject, FName DataTableKey, ECareerTextMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCareerEventKey(const UObject* WorldContextObject, FName _key, EPersonalityType _Personality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ECareerSEType GetCareerEnvironmentSound(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCareerBGMNo(const UObject* WorldContextObject, ECareerBGMType _type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCareerTutorial GetCanUseTutorial(const UObject* WorldContextObject, ECareerTutorialDispTiming eDispTiming);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteTransitionCareerHUB(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteTransition(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 ExecRandomFromPercent(int32 Length, TArray<int32> PercentList);
    
    UFUNCTION(BlueprintCallable)
    static void EditorSaveRequestCareerSnapshot();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearGlobalCareerParams(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckMaxValueReach(const UObject* WorldContextObject, FCareerRecordInfo stRecordInfo, ECareerCheckMaxValue eCheckMaxValue);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckExcludeWrestler(EWrestlerID_N eWrestler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckAllUnlcokTShirt(const UObject* WorldContextObject, UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeDOFQualityHigh(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeDOFQualityDefault(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECareerAttireType ChangeAttire(EWrestlerID_N eWrestlerID, ECareerAttireType eAttire, bool bPlayerWrestler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanPPV(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcMiniGameRewardDifficulity(const UObject* WorldContextObject, ECareerStoryCardRegularReward eRegularReward, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CalcMatchRewardDifficulity(const UObject* WorldContextObject, ECareerStoryCardRegularReward eRegularReward, int32 Value);
    
};

