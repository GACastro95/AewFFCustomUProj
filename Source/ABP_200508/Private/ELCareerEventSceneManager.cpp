#include "ELCareerEventSceneManager.h"


void AELCareerEventSceneManager::SetUseEventMessageData(FCareerEventMessage _Data) {
}


void AELCareerEventSceneManager::SetNextEventMessageName(FName _Name) {
}

void AELCareerEventSceneManager::SetEventSceneResult(ECareerStoryResultCondition _EventResult) {
}

void AELCareerEventSceneManager::SetBackStageObject(AELCareerEventBase* _Object) {
}


FCareerEventMessage AELCareerEventSceneManager::GetUseEventMessageData() {
    return FCareerEventMessage{};
}

FName AELCareerEventSceneManager::GetNextEventMessageName() {
    return NAME_None;
}

ECareerStoryResultCondition AELCareerEventSceneManager::GetEventSceneResult() {
    return ECareerStoryResultCondition::NONE;
}

ECareerEventState AELCareerEventSceneManager::GetCurrentState() {
    return ECareerEventState::ECareerEventState_None;
}

void AELCareerEventSceneManager::CheckState(int32 _value) {
}

void AELCareerEventSceneManager::ChangeStateSnapShotPrepare() {
}

AELCareerEventSceneManager::AELCareerEventSceneManager() {
    this->m_pBackStageObject = NULL;
    this->m_EventSceneResult = ECareerStoryResultCondition::NONE;
    this->m_CurrentState = ECareerEventState::ECareerEventState_None;
}

