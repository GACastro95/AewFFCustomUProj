#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPersonalityType.h"
#include "EWrestlerID_N.h"
#include "CareerChampionshipHolder.h"
#include "CareerPlayerItemInfo.h"
#include "CareerPostCommandEventList.h"
#include "CareerRecordInfo.h"
#include "CareerStoryCard.h"
#include "ECareerChoicesPattern.h"
#include "ECareerCity.h"
#include "ECareerModeDifficulty.h"
#include "ECareerScenario.h"
#include "ECareerScenarioPart.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_CareerMode.generated.h"

class UELCareerGameParam;
class UMyWrestlerDataObject;

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_CareerMode : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_CareerMode();

    UFUNCTION(BlueprintCallable)
    bool WriteDataFromMyScout(UMyWrestlerDataObject* MyScout);
    
    UFUNCTION(BlueprintCallable)
    bool WriteDataFromMyRoster(UMyWrestlerDataObject* MyRoster);
    
    UFUNCTION(BlueprintCallable)
    void SetValidContinueData(bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    bool SetSaveDataToCareerGameParam(UELCareerGameParam* _careerGameParam);
    
    UFUNCTION(BlueprintCallable)
    void SetNewGameSaveData(bool _create);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerWrestlerPersonality(EPersonalityType _Personality);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerWrestlerId(EWrestlerID_N _WrestlerID);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerWrestlerGUID(FGuid _wrestlerGUID);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerWrestlerClearCount(TArray<uint8>& _clearCount);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerVegetarian(bool _bVegetarian);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerUseTurnEnding(bool _useTurnEnding);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerUnlockRampage(bool _bUnlockDark);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerUnlockDark(bool _bUnlockDark);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerTutorialUseFlag(TArray<uint8>& _useFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerTurnMax(int32 _TurnMax);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerTotalScenarioTurn(int32 _TotalScenarioTurn);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerSkillPoint(int32 _skillPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerScout(UMyWrestlerDataObject* _Scout);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerScenarioPart(ECareerScenarioPart _ScenarioPart);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerScenario(ECareerScenario _Scenario);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerRoster(UMyWrestlerDataObject* _Roster);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerRivalId(EWrestlerID_N _rivalId);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerRecordInfoTotal(FCareerRecordInfo _careerRecordInfoTotal);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerRecordInfoLocal(FCareerRecordInfo _careerRecordInfoLocal);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerPresetNo(int32 PresetNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerPlayerItemInfo(FCareerPlayerItemInfo _careerPlayerItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerPlayDarkMatch(bool _bPlayDarkMatch);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerPertnerId(EWrestlerID_N _pertnerId);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerNextStoryKey(FName _nextStoryKey);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMotivation(int32 _motivation);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMoney(int32 _careerMoney);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMenuActionSelectedFlag(uint8 _SelectedFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMatchVenue(ECareerCity _matchVenue);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerLongStoryCard(FCareerStoryCard _StoryCard);
    
    UFUNCTION(BlueprintCallable)
    bool SetCareerGameParamToSaveData(UELCareerGameParam* _careerGameParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerDispTutorialDialog(bool bDispTutorialDialog);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerDispSubtitles(bool _bDispSubtitles);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerDifficulty(ECareerModeDifficulty _Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerDateId(EWrestlerID_N _dateId);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerCurrentWeek(int32 _currentWeek);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerCurrentTurn(int32 _currentTurn);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerCondition(int32 _condition);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerChampionship(FCareerChampionshipHolder _careerChampionship);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerbInjury(bool _bInjury);
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* ReadDataToMyScout();
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* ReadDataToMyRoster();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidContinueData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewGameSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerChoicesPattern GetChoicesSelectResult(int32 _targetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerScenario GetCareeScenario();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPersonalityType GetCareerWrestlerPersonality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetCareerWrestlerId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetCareerWrestlerGUID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCareerWrestlerClearCount(TArray<uint8>& _clearCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCareerVegetarian();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCareerUseTurnEnding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCareerUnlockRampage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCareerUnlockDark();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCareerTutorialUseFlag(TArray<uint8>& _clearCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerTurnMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerTotalScenarioTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerSkillPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMyWrestlerDataObject* GetCareerScout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerScenarioPart GetCareerScenarioPart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMyWrestlerDataObject* GetCareerRoster();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetCareerRivalId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerRecordInfo GetCareerRecordInfoTotal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerRecordInfo GetCareerRecordInfoLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerPresetNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerPostCommandEventList GetCareerPostCommandEventList(int32 _targetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerPlayerItemInfo GetCareerPlayerItemInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCareerPlayDarkMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetCareerPertnerId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCareerNextStoryKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerMotivation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCareerMenuActionSelectedFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerCity GetCareerMatchVenue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerStoryCard GetCareerLongStoryCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCareerDispTutorialDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCareerDispSubtitles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerModeDifficulty GetCareerDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetCareerDateId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerCurrentWeek();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerCurrentTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerChampionshipHolder GetCareerChampionship();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCareerbInjury();
    
    UFUNCTION(BlueprintCallable)
    void AddChoicesSelectResult(int32 _targetId, ECareerChoicesPattern _choicesSelectionResult);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerPostCommandEventList(int32 _targetId, FCareerPostCommandEventList _postCommandEventList);
    
};

