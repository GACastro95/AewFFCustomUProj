#include "ELCareerUtilityFunction.h"

void UELCareerUtilityFunction::UpdateSceneCapture(const UObject* WorldContextObject, ASceneCapture2D* pSceneCapture2D) {
}

void UELCareerUtilityFunction::UpdateCareerRecordsTotal(const UObject* WorldContextObject) {
}

void UELCareerUtilityFunction::UpdateCareerRecordsLocal(const UObject* WorldContextObject, ECareerRecordsInfo RecordsInfo, int32 Value) {
}

void UELCareerUtilityFunction::UpdateCareerPlayDataInfo(const UObject* WorldContextObject, ECareerPlayDataInfoType MiningType, int32 MiningData) {
}

void UELCareerUtilityFunction::TutorialTemporaryClear(const UObject* WorldContextObject) {
}

void UELCareerUtilityFunction::SetValidCareerContinueData(bool _Enable, uint8 _saveDataAccessFlag) {
}

bool UELCareerUtilityFunction::SetupCareerSystemSaveData() {
    return false;
}

bool UELCareerUtilityFunction::SetupCareerSaveData() {
    return false;
}

void UELCareerUtilityFunction::SetSystemSaveDataToCareerGameParam(UELCareerGameParam* _careerGameParam, uint8 _saveDataAccessFlag) {
}

void UELCareerUtilityFunction::SetSaveDataToWrestlerClearCount(UELCareerGameParam* _pCareerGameParam, uint8 _saveDataAccessFlag) {
}

void UELCareerUtilityFunction::SetSaveDataToRecordInfoTotal(UELCareerGameParam* _pCareerGameParam, uint8 _saveDataAccessFlag) {
}

void UELCareerUtilityFunction::SetSaveDataToCareerGameParam(UELCareerGameParam* _pCareerGameParam, uint8 _saveDataAccessFlag) {
}

void UELCareerUtilityFunction::SetRenderTargetSize(USceneCaptureComponent2D* pSceneCapture2D, USkeletalMeshComponent* pMeshComp, int32 InSizeX, int32 InSizeY, bool bEnabledForceMipStreaming) {
}

void UELCareerUtilityFunction::SetOptimizeSceneCapture2DOption(USceneCaptureComponent2D* pSceneCapture2D, bool bAtmosphereOnly) {
}

void UELCareerUtilityFunction::SetNewGameSaveData(bool _create, uint8 _saveDataAccessFlag) {
}

void UELCareerUtilityFunction::SetCareerLevelInfo(const UObject* WorldContextObject, ECareerLevelInfo ECareerLevelInfo) {
}

void UELCareerUtilityFunction::SetCareerGameParamToSystemSaveData(UELCareerGameParam* _careerGameParam, uint8 _saveDataAccessFlag) {
}

void UELCareerUtilityFunction::SetCareerGameParamToSaveData(UELCareerGameParam* _careerGameParam, uint8 _saveDataAccessFlag) {
}

void UELCareerUtilityFunction::SaveRequestCareerModeSystemData() {
}

void UELCareerUtilityFunction::SaveRequestCareerModeData(uint8 _saveDataAccessFlag) {
}

TArray<FString> UELCareerUtilityFunction::ParseStringWithLinefeed(const FString& _String) {
    return TArray<FString>();
}

FCareerMatchCardCore UELCareerUtilityFunction::MakeMatchCardByStoryCard(const UObject* WorldContextObject, FCareerStoryCard _StoryCard) {
    return FCareerMatchCardCore{};
}

FCareerMatchCardCore UELCareerUtilityFunction::MakeMatchCardByStory(const UObject* WorldContextObject, FCareerStoryCard _StoryCard, FCareerStory _Story) {
    return FCareerMatchCardCore{};
}

EWrestlerID_N UELCareerUtilityFunction::LotteryDateRival(const UObject* WorldContextObject, EWrestlerID_N _DateWrestlerID) {
    return EWrestlerID_N::None;
}

bool UELCareerUtilityFunction::IsValidCareerContinueData(uint8 _saveDataAccessFlag) {
    return false;
}

bool UELCareerUtilityFunction::IsTransitionScript(ECareerStoryOperationType _OperationType) {
    return false;
}

bool UELCareerUtilityFunction::IsSnapshotOneFileMultiImage() {
    return false;
}

bool UELCareerUtilityFunction::IsSnapshotFileDelete() {
    return false;
}

bool UELCareerUtilityFunction::IsSnapshotCreateEach() {
    return false;
}

bool UELCareerUtilityFunction::IsSkipQuitMatchProcess(const UObject* WorldContextObject) {
    return false;
}

bool UELCareerUtilityFunction::IsPlayOuting(const UObject* WorldContextObject) {
    return false;
}

int32 UELCareerUtilityFunction::GetWeekByScenarioPart(ECareerScenarioPart ScenarioPart) {
    return 0;
}

FString UELCareerUtilityFunction::GetStringToNum(int32 Number) {
    return TEXT("");
}

FString UELCareerUtilityFunction::GetStringByEnum(const FString& EnumDefine, int32 Num) {
    return TEXT("");
}

int32 UELCareerUtilityFunction::GetSnapshotMax() {
    return 0;
}

FString UELCareerUtilityFunction::GetSignedNumberString(int32 Number) {
    return TEXT("");
}

ECareerScenarioNo UELCareerUtilityFunction::GetScenarioNoByScenarioPart(ECareerScenarioPart ScenarioPart) {
    return ECareerScenarioNo::None;
}

ECareerScenarioMatchTiming UELCareerUtilityFunction::GetScenarioMatchTimingByScenarioPart(ECareerScenarioPart _ScenarioPart) {
    return ECareerScenarioMatchTiming::PROLOGUE;
}

EWrestlerID_N UELCareerUtilityFunction::GetRangeWrestlerID() {
    return EWrestlerID_N::None;
}

int32 UELCareerUtilityFunction::GetPostCommandEventNumber(const UObject* WorldContextObject, ECareerPostCommandEventType eCommandType) {
    return 0;
}

ECareerPostCommandEventMark UELCareerUtilityFunction::GetPostCommandEventMark(const UObject* WorldContextObject, ECareerPostCommandEventType eCommandType) {
    return ECareerPostCommandEventMark::None;
}

FCareerPostCommandEventCore UELCareerUtilityFunction::GetPostCommandEventCore(const UObject* WorldContextObject, ECareerPostCommandEventType eCommandType) {
    return FCareerPostCommandEventCore{};
}

EPersonalityType UELCareerUtilityFunction::GetPlayerPersonalityType(const UObject* WorldContextObject) {
    return EPersonalityType::Hero;
}

UMyWrestlerDataObject* UELCareerUtilityFunction::GetPlayerMyWrestlerDataObject(const UObject* WorldContextObject) {
    return NULL;
}

EGender UELCareerUtilityFunction::GetPlayerGender(const UObject* WorldContextObject) {
    return EGender::Male;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberWorkOutMedium() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberWorkOutLow() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberWorkOutHigh() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberTutorial() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberSnapshotAlbum() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberSightSeeing() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberSaveAndExit() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberPromotion() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberOtherMatchC() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberOtherMatchB() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberOtherMatchA() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberMinigame() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberMedicalB() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberMedicalA() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberDynamite() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberDining() {
    return 0;
}

int32 UELCareerUtilityFunction::GetMenuNotifyNumberCustomWrestler() {
    return 0;
}

ECareerScenario UELCareerUtilityFunction::GetCurrentCareerScenarioID(const UObject* WorldContextObject) {
    return ECareerScenario::Prologue;
}

int32 UELCareerUtilityFunction::GetCareerSENo(const UObject* WorldContextObject, ECareerSEType _type) {
    return 0;
}

int32 UELCareerUtilityFunction::GetCareerRecordsLocalValue(const UObject* WorldContextObject, ECareerRecordsInfo RecordsInfo, int32 Value) {
    return 0;
}

int32 UELCareerUtilityFunction::GetCareerPlayerCondition(const UObject* WorldContextObject) {
    return 0;
}

FCareerPlayData UELCareerUtilityFunction::GetCareerPlayDataInfo(const UObject* WorldContextObject) {
    return FCareerPlayData{};
}

FName UELCareerUtilityFunction::GetCareerNameError() {
    return NAME_None;
}

FText UELCareerUtilityFunction::GetCareerMenuText(const UObject* WorldContextObject, FName DataTableKey, ECareerTextMode Mode) {
    return FText::GetEmpty();
}

ECareerLevelInfo UELCareerUtilityFunction::GetCareerLevelInfo(const UObject* WorldContextObject) {
    return ECareerLevelInfo::Career_Level_None;
}

float UELCareerUtilityFunction::GetCareerGameSpeed(const UObject* WorldContextObject) {
    return 0.0f;
}

FText UELCareerUtilityFunction::GetCareerEventTalkText(const UObject* WorldContextObject, FName _key, EPersonalityType _Personality, EGender _Gender) {
    return FText::GetEmpty();
}

FText UELCareerUtilityFunction::GetCareerEventSceneText(const UObject* WorldContextObject, FName DataTableKey, ECareerTextMode Mode) {
    return FText::GetEmpty();
}

FName UELCareerUtilityFunction::GetCareerEventKey(const UObject* WorldContextObject, FName _key, EPersonalityType _Personality) {
    return NAME_None;
}

ECareerSEType UELCareerUtilityFunction::GetCareerEnvironmentSound(const UObject* WorldContextObject) {
    return ECareerSEType::NONE;
}

int32 UELCareerUtilityFunction::GetCareerBGMNo(const UObject* WorldContextObject, ECareerBGMType _type) {
    return 0;
}

FCareerTutorial UELCareerUtilityFunction::GetCanUseTutorial(const UObject* WorldContextObject, ECareerTutorialDispTiming eDispTiming) {
    return FCareerTutorial{};
}

void UELCareerUtilityFunction::ExecuteTransitionCareerHUB(const UObject* WorldContextObject) {
}

void UELCareerUtilityFunction::ExecuteTransition(const UObject* WorldContextObject) {
}

int32 UELCareerUtilityFunction::ExecRandomFromPercent(int32 Length, TArray<int32> PercentList) {
    return 0;
}

void UELCareerUtilityFunction::EditorSaveRequestCareerSnapshot() {
}

void UELCareerUtilityFunction::ClearGlobalCareerParams(const UObject* WorldContextObject) {
}

bool UELCareerUtilityFunction::CheckMaxValueReach(const UObject* WorldContextObject, FCareerRecordInfo stRecordInfo, ECareerCheckMaxValue eCheckMaxValue) {
    return false;
}

bool UELCareerUtilityFunction::CheckExcludeWrestler(EWrestlerID_N eWrestler) {
    return false;
}

bool UELCareerUtilityFunction::CheckAllUnlcokTShirt(const UObject* WorldContextObject, UDataTable* DataTable) {
    return false;
}

void UELCareerUtilityFunction::ChangeDOFQualityHigh(const UObject* WorldContextObject) {
}

void UELCareerUtilityFunction::ChangeDOFQualityDefault(const UObject* WorldContextObject) {
}

ECareerAttireType UELCareerUtilityFunction::ChangeAttire(EWrestlerID_N eWrestlerID, ECareerAttireType eAttire, bool bPlayerWrestler) {
    return ECareerAttireType::Ring;
}

bool UELCareerUtilityFunction::CanPPV(const UObject* WorldContextObject) {
    return false;
}

int32 UELCareerUtilityFunction::CalcMiniGameRewardDifficulity(const UObject* WorldContextObject, ECareerStoryCardRegularReward eRegularReward, int32 Value) {
    return 0;
}

int32 UELCareerUtilityFunction::CalcMatchRewardDifficulity(const UObject* WorldContextObject, ECareerStoryCardRegularReward eRegularReward, int32 Value) {
    return 0;
}

UELCareerUtilityFunction::UELCareerUtilityFunction() {
}

