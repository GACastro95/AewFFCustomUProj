#include "ELTipsLoadingManager.h"

UELTipsLoadingManager::UELTipsLoadingManager() {
    this->UseOverrideNextLevel = false;
    this->m_pLoadingExecuteActor = NULL;
    this->m_TipsTypeProgress = 0;
    this->m_IsVisibleTitleDlc = true;
    this->m_IsDebugScreen = false;
}

bool UELTipsLoadingManager::StartScreen(ETipsLoadingCategory _displayCategory, FTipsLoadingCompleteDelegate _completeDelegate, bool _isFadeInStart, int32 _baseZOrder) {
    return false;
}

void UELTipsLoadingManager::SetVisibleTitleDlc(bool _Flag) {
}

void UELTipsLoadingManager::SetOverrideNextLevel(const FName& _nextLevel, const FString& _optionString) {
}

void UELTipsLoadingManager::OnCompleteLoading() {
}

bool UELTipsLoadingManager::IsVisibleTitleDlc() const {
    return false;
}

bool UELTipsLoadingManager::IsDebugScreen() {
    return false;
}

bool UELTipsLoadingManager::GetResourceInfo(ETipsLoadingCategory _displayCategory, int32 _targetIndex, FTipsLoadingResourceInfo& _outResourceInfo) {
    return false;
}

void UELTipsLoadingManager::EndScreen() {
}

bool UELTipsLoadingManager::Debug_StartScreen(ETipsLoadingCategory _displayCategory, int32 _selectTipsIndex, FTipsLoadingCompleteDelegate _completeDelegate, int32 _selectCategoryIndex) {
    return false;
}

void UELTipsLoadingManager::ClearOverrideNextLevel() {
}

bool UELTipsLoadingManager::CheckUseTipsLoadingTitleDlc() {
    return false;
}


