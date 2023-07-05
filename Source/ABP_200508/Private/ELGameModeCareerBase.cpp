#include "ELGameModeCareerBase.h"





void AELGameModeCareerBase::SpawnExtraLight(UDataTable* pDataTable) {
}




void AELGameModeCareerBase::SetupEventBaseInfo(FCareerEventMessage _Data) {
}

void AELGameModeCareerBase::SetupEventActionInfo(FCareerEventMessage _Data) {
}

void AELGameModeCareerBase::SetHiddenExtraLight(bool bHiddenFlag) {
}

void AELGameModeCareerBase::SetDataTable_CareerSkillText(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerSE(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerScriptProbability(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerMovieSceneParam(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerMiniGameSummary(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerMenuText(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerMatchSummary(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerItemText(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerEventText(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerEventSceneText(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerEventSceneMessage(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerEventSceneList(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerDining(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerCutSceneParam(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetDataTable_CareerBGM(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetCutSceneTarget(ECareerCutsceneCastType eMyCastType, ECareerCutsceneCastType eTargetCastType) {
}

void AELGameModeCareerBase::SetCutSceneCast(ECareerCutsceneCastType eCastType, AActor* in_Cast) {
}

void AELGameModeCareerBase::SetCareerVehicleActor(AELCareerVehicleActor* _CareerVehicleActor) {
}

void AELGameModeCareerBase::SetCareerStoryDataActor(AELCareerStoryDataActor* _pCareerStoryDataActor) {
}

void AELGameModeCareerBase::SetCareerStoryCardLottery(AELCareerStoryCardLottery* CareerStoryCardLottery) {
}

void AELGameModeCareerBase::SetCareerStateManager(AELCareerStateManager* CareerStateManager) {
}

void AELGameModeCareerBase::SetCareerSquareManager(AELCareerSquareManager* _CareerSquareManager) {
}

void AELGameModeCareerBase::SetCareerSkillManager(AELCareerSkillManager* _CareerSkillManager) {
}

void AELGameModeCareerBase::SetCareerSchedule(AELCareerSchedule* _CareerSchedule) {
}

void AELGameModeCareerBase::SetCareerOtherMenuManager(AELCareerOtherMenuManager* _CareerOtherMenuManager) {
}

void AELGameModeCareerBase::SetCareerMovieSceneManager(AELCareerMovieSceneManager* _CareerMovieSceneManager) {
}

void AELGameModeCareerBase::SetCareerMatchSetting(UDataTable* pDataTable) {
}

void AELGameModeCareerBase::SetCareerMatchResultInfo(const FCareerMatchResultInfo& _Result) {
}

void AELGameModeCareerBase::SetCareerLayoutSceneManager(AELCareerLayoutSceneManager* _CareerLayoutSceneManager) {
}

void AELGameModeCareerBase::SetCareerItemManager(AELCareerItemManager* _CareerItemManager) {
}

void AELGameModeCareerBase::SetCareerEventSceneManager(AELCareerEventSceneManager* _CareerEventSceneManager) {
}

void AELGameModeCareerBase::SetCareerEditWrestlerParam(FEditWrestlerParam _Param) {
}

void AELGameModeCareerBase::SetCareerDebugInfoWidget(UELCareerDebugInfoWidget* pCareerDebugInfoWidget) {
}

void AELGameModeCareerBase::SetCareerCutSceneUtilityBase(AELCareerCutSceneUtilityBase* _CareerCutSceneUtilityBase) {
}

void AELGameModeCareerBase::SetCareerCutSceneManager(AELCareerCutSceneManager* _CareerCutSceneManager) {
}

void AELGameModeCareerBase::SetCareerChameleon(AELCareerChameleonBase* _CareerChameleonBase) {
}

void AELGameModeCareerBase::SetCareerCameraPawn(APawn* CareerCamera) {
}

void AELGameModeCareerBase::SetCareerCameraManager(AELCareerCameraManagerBase* CameraManager) {
}

void AELGameModeCareerBase::SetCareerBalanceAdjustParam(AELCareerBalanceAdjustParam* _CareerBalanceAdjustParam) {
}

void AELGameModeCareerBase::SetCareerAssetLoad(AELCareerAssetLoadBase* _CareerAssetLoad) {
}

void AELGameModeCareerBase::SetCareerAffectMatchMotivation(FCareerAffectMatchMotivation _Data) {
}

void AELGameModeCareerBase::SetCareerAffectMatchInjury(FCareerAffectMatchInjury _Data) {
}

void AELGameModeCareerBase::SetActionInfoList(TArray<FCareerEventActionInfo> _ActionInfoList) {
}

void AELGameModeCareerBase::SetActionInfoCounter(int32 _value) {
}

void AELGameModeCareerBase::SearchLevelTargetPoint() {
}

void AELGameModeCareerBase::RequestCareerMenuAnimation(const FString& Name) {
}







TArray<FString> AELGameModeCareerBase::ParseMessageString(const FString& _Message) {
    return TArray<FString>();
}

void AELGameModeCareerBase::LoadCareerSaveParam() {
}

void AELGameModeCareerBase::JudgeTransitionBranch(ECareerTransitionType& TransitionBranch) {
}

bool AELGameModeCareerBase::IsSnapShotEvent() const {
    return false;
}

bool AELGameModeCareerBase::IsSkipFadeOutCareerMap() {
    return false;
}

bool AELGameModeCareerBase::IsCreateWidgetFromLevelInfo(yEnMenuWidgetType eMenuWidgetType) {
    return false;
}

void AELGameModeCareerBase::IncrementActionCounter() {
}



ECareerStageType AELGameModeCareerBase::GetStageType() {
    return ECareerStageType::NONE;
}

ECareerRingObject AELGameModeCareerBase::GetRingObject() {
    return ECareerRingObject::None;
}

TArray<FName> AELGameModeCareerBase::GetPlayerSelectResultFromEventMessageData(FCareerEventMessage _DataRow) {
    return TArray<FName>();
}

TArray<FText> AELGameModeCareerBase::GetPlayerSelectFromEventMessageData(FCareerEventMessage _DataRow) {
    return TArray<FText>();
}

FName AELGameModeCareerBase::GetNextEventMessageNameFromEventMessageData(FCareerEventMessage _DataRow) {
    return NAME_None;
}

FTransform AELGameModeCareerBase::GetLevelTargetPoint(int32 TargetPoint) {
    return FTransform{};
}

TArray<FCareerEventSceneReplaceAnimation> AELGameModeCareerBase::GetEventSceneReplaceAnimationData() const {
    return TArray<FCareerEventSceneReplaceAnimation>();
}

ECareerStoryResultCondition AELGameModeCareerBase::GetEventResultFromEventMessageData(FCareerEventMessage _DataRow) {
    return ECareerStoryResultCondition::NONE;
}

FName AELGameModeCareerBase::GetEventMessageNameFromEventData(FCareerEvent _DataRow) {
    return NAME_None;
}

TArray<FCareerCAWHeightConvert> AELGameModeCareerBase::GetEventCAWHeightConvertData() const {
    return TArray<FCareerCAWHeightConvert>();
}

ECareerCutsceneCastType AELGameModeCareerBase::GetCutSceneTarget(ECareerCutsceneCastType eMyCastType) {
    return ECareerCutsceneCastType::NONE;
}

AActor* AELGameModeCareerBase::GetCutSceneCast(ECareerCutsceneCastType eCastType) {
    return NULL;
}

AELCareerVehicleActor* AELGameModeCareerBase::GetCareerVehicleActor() const {
    return NULL;
}

TArray<FCareerTutorial> AELGameModeCareerBase::GetCareerTutorialData() const {
    return TArray<FCareerTutorial>();
}

AELCareerStoryDataActor* AELGameModeCareerBase::GetCareerStoryDataActor() const {
    return NULL;
}

AELCareerStoryCardLottery* AELGameModeCareerBase::GetCareerStoryCardLottery() const {
    return NULL;
}

AELCareerStateManager* AELGameModeCareerBase::GetCareerStateManager() const {
    return NULL;
}

AELCareerSquareManager* AELGameModeCareerBase::GetCareerSquareManager() const {
    return NULL;
}

AELCareerSkillManager* AELGameModeCareerBase::GetCareerSkillManager() const {
    return NULL;
}

AELCareerScriptManager* AELGameModeCareerBase::GetCareerScriptManager() {
    return NULL;
}

TArray<FCareerSchedule> AELGameModeCareerBase::GetCareerScheduleData() {
    return TArray<FCareerSchedule>();
}

AELCareerSchedule* AELGameModeCareerBase::GetCareerSchedule() const {
    return NULL;
}

AELCareerOtherMenuManager* AELGameModeCareerBase::GetCareerOtherMenuManager() const {
    return NULL;
}

AELCareerMovieSceneManager* AELGameModeCareerBase::GetCareerMovieSceneManager() const {
    return NULL;
}

FCareerMiniGame AELGameModeCareerBase::GetCareerMiniGameRowData(FName _key) {
    return FCareerMiniGame{};
}

FString AELGameModeCareerBase::GetCareerMenuAnimation() const {
    return TEXT("");
}

FCareerMatchSetting AELGameModeCareerBase::GetCareerMatchSetting(ECareerScenarioPart eScenarioPart) {
    return FCareerMatchSetting{};
}

FCareerMatch AELGameModeCareerBase::GetCareerMatchRowData(FName _key) {
    return FCareerMatch{};
}

AELCareerLayoutSceneManager* AELGameModeCareerBase::GetCareerLayoutSceneManager() const {
    return NULL;
}

AELCareerItemManager* AELGameModeCareerBase::GetCareerItemManager() const {
    return NULL;
}

FCareerEventText AELGameModeCareerBase::GetCareerEventTextRowData(FName _key) {
    return FCareerEventText{};
}

AELCareerEventSceneManager* AELGameModeCareerBase::GetCareerEventSceneManager() const {
    return NULL;
}

FCareerEvent AELGameModeCareerBase::GetCareerEventRowData(FName _key) {
    return FCareerEvent{};
}

FCareerEventMessage AELGameModeCareerBase::GetCareerEventMessageRowData(FName _key) {
    return FCareerEventMessage{};
}

FEditWrestlerParam AELGameModeCareerBase::GetCareerEditWrestlerParam() {
    return FEditWrestlerParam{};
}

FCareerDiningInfo AELGameModeCareerBase::GetCareerDiningInfoFromDataTable(FName _key) {
    return FCareerDiningInfo{};
}

AELCareerCutSceneUtilityBase* AELGameModeCareerBase::GetCareerCutSceneUtilityBase() const {
    return NULL;
}

FCareerCutsceneParam AELGameModeCareerBase::GetCareerCutsceneParamRowData(FName _key) {
    return FCareerCutsceneParam{};
}

AELCareerCutSceneManager* AELGameModeCareerBase::GetCareerCutSceneManager() const {
    return NULL;
}

AELCareerChameleonBase* AELGameModeCareerBase::GetCareerChameleon() const {
    return NULL;
}

APawn* AELGameModeCareerBase::GetCareerCameraPawn() const {
    return NULL;
}

AELCareerCameraManagerBase* AELGameModeCareerBase::GetCareerCameraManager() const {
    return NULL;
}

AELCareerBalanceAdjustParam* AELGameModeCareerBase::GetCareerBalanceAdjustParam() const {
    return NULL;
}

AELCareerAssetLoadBase* AELGameModeCareerBase::GetCareerAssetLoad() const {
    return NULL;
}

FCareerAffectMatchMotivation AELGameModeCareerBase::GetCareerAffectMatchMotivation() const {
    return FCareerAffectMatchMotivation{};
}

FCareerAffectMatchInjury AELGameModeCareerBase::GetCareerAffectMatchInjury() const {
    return FCareerAffectMatchInjury{};
}


FCareerEventBaseInfo AELGameModeCareerBase::GetBaseInfo() {
    return FCareerEventBaseInfo{};
}

FName AELGameModeCareerBase::GetBackStageSubLevelUtility() {
    return NAME_None;
}

FTransform AELGameModeCareerBase::GetBackStageLocation() {
    return FTransform{};
}

FTransform AELGameModeCareerBase::GetArenaLocation() {
    return FTransform{};
}

int32 AELGameModeCareerBase::GetAreaTargetPoint() {
    return 0;
}

FString AELGameModeCareerBase::GetActionInfoTextID(int32 _Index) {
    return TEXT("");
}

TArray<FCareerEventActionInfo> AELGameModeCareerBase::GetActionInfoList() {
    return TArray<FCareerEventActionInfo>();
}

int32 AELGameModeCareerBase::GetActionInfoCounter() {
    return 0;
}

FCareerEventActionInfo AELGameModeCareerBase::GetActionInfo(int32 _Index) {
    return FCareerEventActionInfo{};
}




void AELGameModeCareerBase::DebugMenu_EventScene_SetTitleStringKey(const FString& Key) {
}

void AELGameModeCareerBase::DebugMenu_EventScene_SetTitleKey(const FString& Key) {
}

void AELGameModeCareerBase::DebugMenu_EventScene_SetTalkStringKey(const FString& Key) {
}

void AELGameModeCareerBase::DebugMenu_EventScene_SetTalkKey(const FString& Key) {
}

void AELGameModeCareerBase::DebugMenu_EventScene_SetPersonality(EPersonalityType Personality) {
}

void AELGameModeCareerBase::DebugMenu_EventScene_SetChoiceTitleStringKey(const FString& Key) {
}

void AELGameModeCareerBase::DebugMenu_EventScene_SetChoiceTitleKey(const FString& Key) {
}

void AELGameModeCareerBase::DebugMenu_EventScene_SetChoiceSelectStringKey(int32 Index, const FString& Key) {
}

void AELGameModeCareerBase::DebugMenu_EventScene_SetChoiceSelectKey(int32 Index, const FString& Key) {
}

void AELGameModeCareerBase::CheckSnapShotEvent() {
}


void AELGameModeCareerBase::AddCareerTutorialData(FCareerTutorial _Data) {
}

void AELGameModeCareerBase::AddCareerScheduleData(FCareerSchedule _Data) {
}

void AELGameModeCareerBase::AddCareerEventSceneReplaceAnimationData(FCareerEventSceneReplaceAnimation _Data) {
}

void AELGameModeCareerBase::AddCareerEventBackStageLocationData(FCareerEventLocation _Data) {
}

void AELGameModeCareerBase::AddCareerEventArenaLocationData(FCareerEventLocation _Data) {
}

void AELGameModeCareerBase::AddCareerCAWHeightConvertData(FCareerCAWHeightConvert _Data) {
}

AELGameModeCareerBase::AELGameModeCareerBase() {
    this->m_pExtraLight = NULL;
    this->m_ActionInfoCounter = 0;
    this->m_pCareerScriptManager = NULL;
    this->m_pCareerDebugInfoWidget = NULL;
}

