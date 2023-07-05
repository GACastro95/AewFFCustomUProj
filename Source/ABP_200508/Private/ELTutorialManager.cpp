#include "ELTutorialManager.h"

void UELTutorialManager::SetDisableAutoEndTutorial(FTutorialStartWaitState OnStartWaotStateDelegate) {
}

bool UELTutorialManager::RequestStartTutorialByIndex(int32 TutorialIndex, FTutorialCompleteDelegate OnCompleteDelegate, bool _displayDecideBtn, bool _displayBottomHelp, bool _checkSaveData, bool _loadingAsset) {
    return false;
}

bool UELTutorialManager::RequestStartTutorial(FName _tutorialName, FTutorialCompleteDelegate OnCompleteDelegate, bool _displayDecideBtn, bool _displayBottomHelp, bool _checkSaveData, bool _loadingAsset) {
    return false;
}

void UELTutorialManager::PseudoPushButtonOK() {
}

void UELTutorialManager::PseudoChangePage(bool isRight) {
}

void UELTutorialManager::OnCompleteTutorial() {
}

bool UELTutorialManager::IsRunningTutorial() {
    return false;
}

bool UELTutorialManager::IsNextTutorial() {
    return false;
}

bool UELTutorialManager::IsConfirmedTutorial(FName _tutorialName) {
    return false;
}

void UELTutorialManager::IntervalPseudoPushButtonOK(float Interval) {
}

void UELTutorialManager::ExecuteManualEndTutorial() {
}

bool UELTutorialManager::CanShowTutorial(int32 TutorialIndex) {
    return false;
}

bool UELTutorialManager::CancelTutorial(bool WithForceCloseDialog) {
    return false;
}

UELTutorialManager::UELTutorialManager() {
    this->m_pTutorialExecuteActor = NULL;
}

