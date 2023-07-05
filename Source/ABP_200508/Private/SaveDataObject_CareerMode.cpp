#include "SaveDataObject_CareerMode.h"

bool USaveDataObject_CareerMode::WriteDataFromMyScout(UMyWrestlerDataObject* MyScout) {
    return false;
}

bool USaveDataObject_CareerMode::WriteDataFromMyRoster(UMyWrestlerDataObject* MyRoster) {
    return false;
}

void USaveDataObject_CareerMode::SetValidContinueData(bool _Enable) {
}

bool USaveDataObject_CareerMode::SetSaveDataToCareerGameParam(UELCareerGameParam* _careerGameParam) {
    return false;
}

void USaveDataObject_CareerMode::SetNewGameSaveData(bool _create) {
}

void USaveDataObject_CareerMode::SetCareerWrestlerPersonality(EPersonalityType _Personality) {
}

void USaveDataObject_CareerMode::SetCareerWrestlerId(EWrestlerID_N _WrestlerID) {
}

void USaveDataObject_CareerMode::SetCareerWrestlerGUID(FGuid _wrestlerGUID) {
}

void USaveDataObject_CareerMode::SetCareerWrestlerClearCount(TArray<uint8>& _clearCount) {
}

void USaveDataObject_CareerMode::SetCareerVegetarian(bool _bVegetarian) {
}

void USaveDataObject_CareerMode::SetCareerUseTurnEnding(bool _useTurnEnding) {
}

void USaveDataObject_CareerMode::SetCareerUnlockRampage(bool _bUnlockDark) {
}

void USaveDataObject_CareerMode::SetCareerUnlockDark(bool _bUnlockDark) {
}

void USaveDataObject_CareerMode::SetCareerTutorialUseFlag(TArray<uint8>& _useFlag) {
}

void USaveDataObject_CareerMode::SetCareerTurnMax(int32 _TurnMax) {
}

void USaveDataObject_CareerMode::SetCareerTotalScenarioTurn(int32 _TotalScenarioTurn) {
}

void USaveDataObject_CareerMode::SetCareerSkillPoint(int32 _skillPoint) {
}

void USaveDataObject_CareerMode::SetCareerScout(UMyWrestlerDataObject* _Scout) {
}

void USaveDataObject_CareerMode::SetCareerScenarioPart(ECareerScenarioPart _ScenarioPart) {
}

void USaveDataObject_CareerMode::SetCareerScenario(ECareerScenario _Scenario) {
}

void USaveDataObject_CareerMode::SetCareerRoster(UMyWrestlerDataObject* _Roster) {
}

void USaveDataObject_CareerMode::SetCareerRivalId(EWrestlerID_N _rivalId) {
}

void USaveDataObject_CareerMode::SetCareerRecordInfoTotal(FCareerRecordInfo _careerRecordInfoTotal) {
}

void USaveDataObject_CareerMode::SetCareerRecordInfoLocal(FCareerRecordInfo _careerRecordInfoLocal) {
}

void USaveDataObject_CareerMode::SetCareerPresetNo(int32 PresetNo) {
}

void USaveDataObject_CareerMode::SetCareerPlayerItemInfo(FCareerPlayerItemInfo _careerPlayerItemInfo) {
}

void USaveDataObject_CareerMode::SetCareerPlayDarkMatch(bool _bPlayDarkMatch) {
}

void USaveDataObject_CareerMode::SetCareerPertnerId(EWrestlerID_N _pertnerId) {
}

void USaveDataObject_CareerMode::SetCareerNextStoryKey(FName _nextStoryKey) {
}

void USaveDataObject_CareerMode::SetCareerMotivation(int32 _motivation) {
}

void USaveDataObject_CareerMode::SetCareerMoney(int32 _careerMoney) {
}

void USaveDataObject_CareerMode::SetCareerMenuActionSelectedFlag(uint8 _SelectedFlag) {
}

void USaveDataObject_CareerMode::SetCareerMatchVenue(ECareerCity _matchVenue) {
}

void USaveDataObject_CareerMode::SetCareerLongStoryCard(FCareerStoryCard _StoryCard) {
}

bool USaveDataObject_CareerMode::SetCareerGameParamToSaveData(UELCareerGameParam* _careerGameParam) {
    return false;
}

void USaveDataObject_CareerMode::SetCareerDispTutorialDialog(bool bDispTutorialDialog) {
}

void USaveDataObject_CareerMode::SetCareerDispSubtitles(bool _bDispSubtitles) {
}

void USaveDataObject_CareerMode::SetCareerDifficulty(ECareerModeDifficulty _Difficulty) {
}

void USaveDataObject_CareerMode::SetCareerDateId(EWrestlerID_N _dateId) {
}

void USaveDataObject_CareerMode::SetCareerCurrentWeek(int32 _currentWeek) {
}

void USaveDataObject_CareerMode::SetCareerCurrentTurn(int32 _currentTurn) {
}

void USaveDataObject_CareerMode::SetCareerCondition(int32 _condition) {
}

void USaveDataObject_CareerMode::SetCareerChampionship(FCareerChampionshipHolder _careerChampionship) {
}

void USaveDataObject_CareerMode::SetCareerbInjury(bool _bInjury) {
}

UMyWrestlerDataObject* USaveDataObject_CareerMode::ReadDataToMyScout() {
    return NULL;
}

UMyWrestlerDataObject* USaveDataObject_CareerMode::ReadDataToMyRoster() {
    return NULL;
}

bool USaveDataObject_CareerMode::IsValidContinueData() {
    return false;
}

bool USaveDataObject_CareerMode::IsNewGameSaveData() {
    return false;
}

ECareerChoicesPattern USaveDataObject_CareerMode::GetChoicesSelectResult(int32 _targetId) {
    return ECareerChoicesPattern::SELECT_A;
}

ECareerScenario USaveDataObject_CareerMode::GetCareeScenario() {
    return ECareerScenario::Prologue;
}

EPersonalityType USaveDataObject_CareerMode::GetCareerWrestlerPersonality() {
    return EPersonalityType::Hero;
}

EWrestlerID_N USaveDataObject_CareerMode::GetCareerWrestlerId() {
    return EWrestlerID_N::None;
}

FGuid USaveDataObject_CareerMode::GetCareerWrestlerGUID() {
    return FGuid{};
}

void USaveDataObject_CareerMode::GetCareerWrestlerClearCount(TArray<uint8>& _clearCount) {
}

bool USaveDataObject_CareerMode::GetCareerVegetarian() {
    return false;
}

bool USaveDataObject_CareerMode::GetCareerUseTurnEnding() {
    return false;
}

bool USaveDataObject_CareerMode::GetCareerUnlockRampage() {
    return false;
}

bool USaveDataObject_CareerMode::GetCareerUnlockDark() {
    return false;
}

void USaveDataObject_CareerMode::GetCareerTutorialUseFlag(TArray<uint8>& _clearCount) {
}

int32 USaveDataObject_CareerMode::GetCareerTurnMax() {
    return 0;
}

int32 USaveDataObject_CareerMode::GetCareerTotalScenarioTurn() {
    return 0;
}

int32 USaveDataObject_CareerMode::GetCareerSkillPoint() {
    return 0;
}

UMyWrestlerDataObject* USaveDataObject_CareerMode::GetCareerScout() {
    return NULL;
}

ECareerScenarioPart USaveDataObject_CareerMode::GetCareerScenarioPart() {
    return ECareerScenarioPart::NONE;
}

UMyWrestlerDataObject* USaveDataObject_CareerMode::GetCareerRoster() {
    return NULL;
}

EWrestlerID_N USaveDataObject_CareerMode::GetCareerRivalId() {
    return EWrestlerID_N::None;
}

FCareerRecordInfo USaveDataObject_CareerMode::GetCareerRecordInfoTotal() {
    return FCareerRecordInfo{};
}

FCareerRecordInfo USaveDataObject_CareerMode::GetCareerRecordInfoLocal() {
    return FCareerRecordInfo{};
}

int32 USaveDataObject_CareerMode::GetCareerPresetNo() {
    return 0;
}

FCareerPostCommandEventList USaveDataObject_CareerMode::GetCareerPostCommandEventList(int32 _targetId) {
    return FCareerPostCommandEventList{};
}

FCareerPlayerItemInfo USaveDataObject_CareerMode::GetCareerPlayerItemInfo() {
    return FCareerPlayerItemInfo{};
}

bool USaveDataObject_CareerMode::GetCareerPlayDarkMatch() {
    return false;
}

EWrestlerID_N USaveDataObject_CareerMode::GetCareerPertnerId() {
    return EWrestlerID_N::None;
}

FName USaveDataObject_CareerMode::GetCareerNextStoryKey() {
    return NAME_None;
}

int32 USaveDataObject_CareerMode::GetCareerMotivation() {
    return 0;
}

int32 USaveDataObject_CareerMode::GetCareerMoney() {
    return 0;
}

uint8 USaveDataObject_CareerMode::GetCareerMenuActionSelectedFlag() {
    return 0;
}

ECareerCity USaveDataObject_CareerMode::GetCareerMatchVenue() {
    return ECareerCity::None;
}

FCareerStoryCard USaveDataObject_CareerMode::GetCareerLongStoryCard() {
    return FCareerStoryCard{};
}

bool USaveDataObject_CareerMode::GetCareerDispTutorialDialog() {
    return false;
}

bool USaveDataObject_CareerMode::GetCareerDispSubtitles() {
    return false;
}

ECareerModeDifficulty USaveDataObject_CareerMode::GetCareerDifficulty() {
    return ECareerModeDifficulty::Easy;
}

EWrestlerID_N USaveDataObject_CareerMode::GetCareerDateId() {
    return EWrestlerID_N::None;
}

int32 USaveDataObject_CareerMode::GetCareerCurrentWeek() {
    return 0;
}

int32 USaveDataObject_CareerMode::GetCareerCurrentTurn() {
    return 0;
}

int32 USaveDataObject_CareerMode::GetCareerCondition() {
    return 0;
}

FCareerChampionshipHolder USaveDataObject_CareerMode::GetCareerChampionship() {
    return FCareerChampionshipHolder{};
}

bool USaveDataObject_CareerMode::GetCareerbInjury() {
    return false;
}

void USaveDataObject_CareerMode::AddChoicesSelectResult(int32 _targetId, ECareerChoicesPattern _choicesSelectionResult) {
}

void USaveDataObject_CareerMode::AddCareerPostCommandEventList(int32 _targetId, FCareerPostCommandEventList _postCommandEventList) {
}

USaveDataObject_CareerMode::USaveDataObject_CareerMode() {
}

